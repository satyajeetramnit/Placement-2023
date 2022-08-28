#include<bits/stdc++.h>
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


// In CPP
Node* reArrangeLinkdList(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    Node* n1,*n2,*prev;
    prev=n1=n2=head;
    while(n1 != nullptr && n1->next != nullptr){
        prev = n2;
        n1 = n1->next->next;
        n2 = n2->next;
    }
    Node* newHead=nullptr,*next;
    while(n2 != nullptr){
        next = n2->next;
        n2->next = newHead;
        newHead = n2;
        n2 = next;
    }
    prev->next = nullptr;
    Node* p1,*p2;
    p1=newHead;
    p2=head;
    next=nullptr;
    while(p1 != nullptr && p2 != nullptr){
        next = p1->next;
        p1->next = p2;
        p1 = p2;
        p2 = next;
    }
    return newHead;
}


// In Java
// private Node reArrangeLinkdList(Node head){
//     if(head == null || head.next == null){
//         return head;
//     }
//     Node n1, n2, prev;
//     prev=n1=n2=head;
//     while(n1 != null && n1.next != null){
//         prev = n2;
//         n1 = n1.next.next;
//         n2 = n2.next;
//     }
//     Node newHead=null,next;
//     while(n2 != null){
//         next = n2.next;
//         n2.next = newHead;
//         newHead = n2;
//         n2 = next;
//     }
//     prev.next = null;

//     Node p1,p2;
//     p1=newHead;
//     p2=head;
//     next=null;
//     while(p1 != null && p2 != null){
//         next = p1.next;
//         p1.next = p2;
//         p1 = p2;
//         p2 = next;
//     }
//     return newHead;
// }