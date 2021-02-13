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

void LevelOrder(Node* temp)
{
	if (temp == NULL)
		return;
    queue<Node*> Q;
    int k=5;
    vector<int> arr;
    Q.push(temp);
    while(!Q.empty())
    {
        Node* current = Q.front();
        //cout<<current->data<<" ";
        arr.push_back(current->data);
        if(current->left!=NULL) Q.push(current->left);
        if(current->right!=NULL) Q.push(current->right);
        Q.pop();
    }
    int sum=0;
    sort(arr.begin(), arr.end());
    for(int i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
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
   LevelOrder(root);
   return 0;
}