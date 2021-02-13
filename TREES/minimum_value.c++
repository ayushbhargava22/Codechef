//BST

#include <iostream>

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

int miniValue() {
    Node* current = root;
    while(current->left!=NULL)
    {
        current = current->left;
    }
    return current->data;
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
   cout<<miniValue();
   return 0;
}