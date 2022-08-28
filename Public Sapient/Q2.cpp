#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)         for(int i=a;i<b;i++)
#define pll                pair<ll,ll>
#define ppl                pair<ll,pair<ll,ll>>
#define mem1(a)            memset(a,-1,sizeof(a))
#define mem0(a)            memset(a,0,sizeof(a))
#define maxHeap(T)         priority_queue <T>
#define minHeap(T)         priority_queue <T, vector<T>, greater<T>> 
#define fast               ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define deb(x)             cout<<#x<<" "<<x<<"\n"
#define uid(l,r)           uniform_int_distribution<int>(l,r); // to use auto temp= uid(l,r). int x= temp(rng); to generate from [L,R]
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;} // only use in equations like sum=max(sum,x)  its equivalent ot amax(sum,x) => sums is changed automatically
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
template<typename T> using pbds =tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; // *s.find_by_order(x)=> xth element on 0 based indexing  , s.order_of_key(x) => no of elements strictly smaller
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 
//----------------------------------STRESS TESTING  --------------------------------------
 #ifdef krish_murarka
    #include "debug.hpp"
#else
    #define debug(...)
    #define testcases(...)
#endif
void debugger(){
    #ifdef krish_murarka
        freopen("error/errorA.txt", "w", stderr);
    #else
    #endif
}

// --------------------------------------TO TAKE INPUT --------------------------------------
void read_input()
{
  #ifdef krish_murarka
  freopen("input/inputA.txt","r",stdin);
  freopen("output/outputA.txt","w",stdout);
  freopen("error/errorA.txt","w",stderr);
  #endif

}

// --------------------------------------CODE STARTS ------------------------------------------
    const int mod = 1e9+7;
    ll fact[100005];
    void precompute()
    {
       fact[0]=1;
       for(int i=1;i<1e5;i++){
            fact[i]=(fact[i-1]*i%mod)%mod;
            // cout<<fact[i]
       }
    }

void solving()
{
  
  int n;
  cin>>n;
  int m;
  cin>>m;
  //strign s; cin>>s;
  vector<ll> a(m,0);
  queue<int> q;
  vector<int> vis(n+1,0);
   precompute();
  for(int i=0;i<m;i++){
     cin>>a[i];
     a[i]--;
     q.push(a[i]);
     vis[a[i]]=1;
  }
  ll ans=1;
  while(q.size()>0){
      
     int count =0;
     
     int sz = q.size();
     // cout<<sz<<"\n";
     for(int i=0;i<sz;i++){
         int p = q.front();
         q.pop();
         
          if((p+1)<n && !vis[p+1]){
              q.push(p+1);
              vis[p+1]=1;
              count++;
          }
          if((p-1)>=0 && !vis[p-1]){
               q.push(p-1);
                vis[p-1]=1;
                count++;
          }
     }
     // cout<<count<<" "<<fact[count]<<"\n";
     ans  = (ans *fact[count])%mod;
     
  }
  cout<<ans<<"\n";
  
  
  



}

int main()
{
    fast;
    debugger();
    // read_input();
    int t=1;
    // cin>>t; 
    for(int i=1;i<=t;i++)
    {  
     testcases("Case #",i);
    //cout<<"Case #"<<i<<": ";
     solving();

    }
   
    return 0;
}