#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
};Node* root = NULL;

Node* create(int data) {
    Node* new_node = new Node;
    new_node->data = data;
    new_node->right=NULL;new_node->left = NULL;
    return new_node;
}

Node* insert(Node* root, int x) {
    if(!root) {
        return create(x);
    }
    
    if(x > root->data) {
        root->right = insert(root->right,x);
    }
    else
    {
        root->left = insert(root->left,x);
    }
    return root;
}

Node* lca(Node* root, int n1,int n2) {
    if(root==NULL) return NULL;
    
    if(root->data > n1 && root->data > n2) {
        return lca(root->left,n1,n2);
    }
    if(root->data < n1 && root->data < n2)
    {
        return lca(root->right,n1,n2);
    }
    return root;
}

int main()
{
   int n;
   cin>>n;
   int x;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       root = insert(root,x);
   }
   int n1,n2;
   cin>>n1>>n2;
   Node* t  = lca(root,n1,n2);
   cout<<t->data;
   return 0;
}