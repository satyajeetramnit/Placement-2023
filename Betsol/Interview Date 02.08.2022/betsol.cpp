
// Q1) Find pair of integer with target sum

#include <bits/stdc++.h>
using namespace std;

// an efficient approach can be to create a map and store the frequency of each element in the array and through the map we can find the pair of elements which sum up to the target sum
pair<int,int> findPair(int arr[], int n, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        if (m.find(target - arr[i]) != m.end()) {
            return {m[target - arr[i]], i};
        }

        m[arr[i]] = i;
    }
    return {-1, -1};
}

// Explain approach 
// first we will create a map
//     then we will traverse the array and store the frequency of each element in the map
//         if the element is not present in the map then we will insert it in the map
//             if the element is present in the map then we will return the pair of elements
//     at last if we are not able to find the pair of elements then we will return -1
// both the time and space complexity of this approach is O(n) as we are traversing the array once and storing the frequency of each element in the map

int main(){
    int arr[] = {1, 2, 3, 4};
    int target = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<int, int> p = findPair(arr, n, target);
    cout << p.first << " " << p.second << endl;
    return 0;
}


// Q2) A table called employees first name column and salary column find the 5th highest salary
select first_name, salary from employees order by salary desc limit 4,1;

// explain approach 
// here first we will select the first name and salary from the employees table then we will order the salary in descending order then we will limit the result to 4,1 as we want the 5th highest salary

// why linked list over an array explain?
//    linked list is a dynamic data structure which means that we can add and remove elements from the linked list at any time but in an array we can only add and remove elements from the end of the array and we cannot add and remove elements from the middle of the array so linked list is more flexible than an array
// memory is contigous in vector and array but not in linked list



// Q3) Reverse the linked list 

// Explain approach
    // we will create a function which will take the head of the linked list as a parameter and will return the head of the reversed linked list as a result of the function call
    //     we will create three pointers prev, curr and next
    //         prev will point to the previous node of the current node
    //         curr will point to the current node
    //         next will point to the next node of the current node
    //     we will traverse the linked list and will reverse the links of the current node
    //         we will make the next of the current node point to the previous node
    //         we will make the previous node point to the current node
    //         we will make the current node point to the next node
    //         we will make the next node point to the next node of the current node
    //     we will return the previous node as the head of the reversed linked list

// Time complexity of this approach is O(n) as we are traversing the linked list once
// Space complexity of this approach is O(1) as we are not using any extra space
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

void reverseLinkedList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void printLinkedList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next = new Node(9);
    head->next->next->next->next->next->next->next->next->next = new Node(10);
    printLinkedList(head);
    reverseLinkedList(head);
    printLinkedList(head);
    return 0;
}