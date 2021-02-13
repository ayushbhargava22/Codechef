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

void LevelOrder(int a[],int n,Node* temp) {
    if(temp == NULL)
        return;
    queue<Node*> Q;
    Q.push(temp);
    vector<int> arr;
    while(!Q.empty())
    {
        Node* current = Q.front();
        arr.push_back(current->data);
        if(current->left!=NULL) Q.push(current->left);
        if(current->right!=NULL) Q.push(current->right);
        Q.pop();
    }
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=arr[i])
        {
            cout<<"NO"<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
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
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   LevelOrder(a,n,root);
   return 0;
}