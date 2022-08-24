#include<bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode{
    public:
        int data;
        SinglyLinkedListNode* next;
        SinglyLinkedListNode(int node_data){
            this->data = node_data;
            this->next = nullptr;
        }
};

SinglyLinkedListNode* deleteEven(SinglyLinkedListNode* listHead){
    SinglyLinkedListNode* head = new SinglyLinkedListNode(0);
    SinglyLinkedListNode* temp = head;
    while(listHead){
        if(listHead->data % 2 != 0){
            temp->next = listHead;
            temp = temp->next;
        }
        listHead = listHead->next;
    }
    temp->next = nullptr;
    return head->next;
}

void print_list(SinglyLinkedListNode* node){
    while(node){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<endl;
}