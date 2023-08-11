#include<bits/stdc++.h>
using namespace std;


class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
    
};

node* buildTree(node* root){
    int data;
    cout<<"Enter data for root node: "<<endl;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for the left of the node "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for the right of the node "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main(){
    node* root = NULL;
    root= buildTree(root);
   
    
    return 0;
}