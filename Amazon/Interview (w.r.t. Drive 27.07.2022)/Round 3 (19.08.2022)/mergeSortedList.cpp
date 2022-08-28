#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

struct compare
{
    bool operator()(struct Node* a, struct Node* b)
    {
        return a->data > b->data;
    }
};
 
struct Node* newNode(int data)
{
    struct Node* new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

struct Node* mergeKSortedLists(struct Node* arr[], int K){
    priority_queue<Node*, vector<Node*>, compare> pq;
    for (int i = 0; i < K; i++)
        if (arr[i] != NULL)
            pq.push(arr[i]);
    
    if (pq.empty())
        return NULL;
   
    struct Node *dummy = newNode(0);
    struct Node *last = dummy;
    
    while (!pq.empty()) {
        struct Node* curr = pq.top();
        pq.pop();
        
        last->next = curr;
        last = last->next; 
       
        if (curr->next != NULL)
             
        pq.push(curr->next);
    }
 
    return dummy->next;
}

// Explain approach
// 1. Create a priority queue to store the pointers to the nodes.
// we will use the compare function to compare the nodes. The compare function will compare the data of the nodes and return true if the data of the first node is greater than the data of the second node.
// 2. Push the pointers to the nodes into the priority queue.
// 3. the we will check if the priority queue is empty or not.
// 4. If the priority queue is empty then return NULL.
// 5. If the priority queue is not empty then we will pop the top element from the priority queue.
// 6. We will store the top element in a temporary variable.
// 7. We will store the next element of the top element in a temporary current variable.
// 8. also we will store the next element of the top element in the next element of the last element.
// 9. We will check if the current element is NULL or not.
// 10. If the current element is NULL then we will return the last element.
// 11. If the current element is not NULL then we will push the next element of the current element into the priority queue.
// 12. We will return the last element.

int main()
{
    struct Node* arr[3];
    arr[0] = newNode(1);
    arr[0]->next = newNode(3);
    arr[0]->next->next = newNode(5);
    arr[1] = newNode(2);
    arr[1]->next = newNode(4);
    arr[1]->next->next = newNode(6);
    arr[2] = newNode(7);
    arr[2]->next = newNode(8);
    arr[2]->next->next = newNode(9);
    struct Node* head = mergeKSortedLists(arr, 3);
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}