#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeNodesBetweenZeros(ListNode* head) {
    ListNode* ans = new ListNode;
    ListNode* temp = ans;
    
    while(head->next){
      temp->next = new ListNode;
      temp = temp->next;

      while(head->next->val != 0){
        temp->val += head->next->val;
        head = head->next;
      }

      head=head->next;
    }
    
    ans=ans->next;
    return ans;
}

int main() {
    ListNode* head = new ListNode(0);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(0);
    head->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next->next = new ListNode(0);
    ListNode* ans = mergeNodesBetweenZeros(head);
    while(ans != nullptr) {
        cout << ans->val << " ";
        ans = ans->next;
    }
    return 0;
}