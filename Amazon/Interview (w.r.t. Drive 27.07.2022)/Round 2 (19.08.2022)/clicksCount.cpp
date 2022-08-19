// You are given a list of domains and the number of clicks each domain got. 
// Return the total number of clicks for each subdomain.

// Example:
// Input: ["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]
// Output: ["901 mail.com", "50 yahoo.com","900 google.mail.com", "5 wiki.org", "5 org", "1 intel.mail.com","951 com"]

// A website domain "google.mail.com" consists of various subdomains. At the top level, 
// we have "com", at the next level, we have "mail.com" and at the lowest level, "google.mail.com". 
// When we visit a domain like "google.mail.com", we will also visit the parent domains "mail.com" and "com" implicitly.

// We can assume each subdomain name is given as a string, containing only lowercase letters and digits,
// and each domain name itself is also given as a string.


#include<bits/stdc++.h>
using namespace std;

vector<string> subdomainVisits(vector<string>& domains) {
	unordered_map<string, int> cnt;
	for (auto& d : domains) {
		int n = stoi(d.substr(0, d.find(' ')));
		string domain = d.substr(d.find(' ') + 1);
		cnt[domain] += n;
		int i = domain.find('.');
		while (i != string::npos) {
			cnt[domain.substr(i + 1)] += n;
			i = domain.find('.', i + 1);
		}
	}
	vector<string> res;
	for (auto& p : cnt) {
		res.push_back(to_string(p.second) + " " + p.first);
	}
	return res;
}

// Explain Approach:
// 1. At first we create a unordered_map to store the domain and the number of clicks.
// 2. Then we iterate through the domains and update the unordered_map.
// 3. In each iteration we find the domain and the number of clicks. We then find the subdomain by finding the '.' in the domain. 
// 4. We then update the unordered_map with the subdomain and the number of clicks.
// 5. Then we repeat the same process for the subdomain.
// 6 . then we create a vector to store the result.
// 7. We then iterate through the unordered_map and create a string to store the result.
// 8. We then push the string to the vector.
// 9. Finally we return the vector. 

int main(){
	vector<string> input={"900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"};
	vector<string> output=subdomainVisits(input);
	for(auto& s:output){
		cout<<s<<endl;
	}
	return 0;
}