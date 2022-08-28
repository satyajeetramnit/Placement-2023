// Convert a tree to its mirror tree by updating nodes on the right side to be same as the nodes 
// on the left side if the structure of the tree is different return -1

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* makeMirrorTree(Node* root){
    if(root==NULL) return NULL;
    if(root->left!=NULL) makeMirrorTree(root->left);
    if(root->right!=NULL) makeMirrorTree(root->right);
    Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
    return root;

}

    // Node* left=makeMirrorTree(root->left);
    // Node* right=makeMirrorTree(root->right);
    // // swap node left to right
    // Node* temp=left;
    // left=right;
    // right=temp;
    // // root->left=right;
    // // root->right=left;
    // return root;
// }


// Not A Complete Solution