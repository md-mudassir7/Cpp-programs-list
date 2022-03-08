#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    return;
}
int main()
{
    Node* root = new Node(2);
    Node* left = new Node(1);



    Node* right = new Node(3);
    root->left=left;
    root->right=right;
    cout<<"dkjasdhsdasm,,m"<<endl;
    inorder(root);
    return 0;
}
