// Given the head of the linked list reverse the nodes of the linked list k at a time and return its modified list
// k is a positive integer and is less than or equal to the length of the linked list if the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is

// Example 1:
// Input: head = [1,2,3,4,5], k = 2
// Output: [2,1,4,3,5]

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

// void reverseKGroup(node* head, int k) {
//     if (head == NULL || k == 1) return head;
//     node* dummy = new node(0);
//     dummy->next = head;
//     node* pre = dummy;
//     node* end = dummy;
//     while (end->next != NULL) {
//         for (int i = 0; i < k && end != NULL; i++) end = end->next;
//         if (end == NULL) break;
//         node* start = pre->next;
//         node* next = end->next;
//         end->next = NULL;
//         pre->next = reverse(start);
//         start->next = next;
//         pre = start;
//         end = pre;
//     }
//     return dummy->next;
// }

Node* reverse(Node* head, int k)
{
    if (!head || k == 1)
        return head;
  
    Node* dummy = new Node(0); 
    dummy->data = -1;
    dummy->next = head;
  
    Node *prev = dummy, *curr = dummy, *next = dummy;
  
    int count = 0;
    while (curr) {
        curr = curr->next;
        count++;
    }
    while (next) {
        curr = prev->next;
        next = curr->next;
        int toLoop = count > k ? k : count - 1;
        for (int i = 1; i < toLoop; i++) {
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
            next = curr->next;
        }
        prev = curr;
        count -= k;
    }
    
    return dummy->next;
}

// approach explination
// 1. create a dummy node and point it to the head of the linked list
// 2. create two pointers pre and end and point them to the dummy node
// 3. run a loop until the end pointer reaches the end of the linked list
// 4. in the loop move the end pointer k times and if the end pointer reaches the end of the linked list then break the loop
// 5. if the end pointer reaches the end of the linked list then break the loop
// 6. create two pointers start and next and point them to the pre->next and end->next respectively
// 7. point the end->next to NULL
// 8. point the pre->next to the reverse of the linked list starting from the start pointer
// 9. point the start->next to the next pointer
// 10. point the pre to the start pointer
// 11. point the end to the pre pointer
// 12. return the dummy->next


int main(){

}