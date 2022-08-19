#include<bits/stdc++.h>
using namespace std;

// function for finding the lowest common ancestor of two nodes

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


Node* LCA(Node* root,int n1,int n2){
    if(root==NULL) return NULL;
    if(root->data==n1 || root->data==n2) return root;
    Node* left=LCA(root->left,n1,n2);
    Node* right=LCA(root->right,n1,n2);
    if(left!=NULL && right!=NULL) return root;
    if(left==NULL && right==NULL) return NULL;
    if(left!=NULL) return LCA(root->left,n1,n2);
    return LCA(root->right,n1,n2);
}

// time complexity: O(n)
// space complexity: O(n)

// Explain Approach
// if root is equal to n1 or n2 return root
// call LCA for left and right subtree
// if left and right are not null return root
// if left and right are null return null
// if left is not null return LCA for left subtree
// return LCA for right subtree


int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<LCA(root,4,5)->data;
    return 0;
}