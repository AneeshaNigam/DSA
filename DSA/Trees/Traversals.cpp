#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};

void preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==nullptr) return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==nullptr) return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

    Node* root= new Node(5);
    root->left=new Node(6);
    root->left->left=new Node(7);
    root->left->right=new Node(8);

    cout<<"This is the preorder Travesral of the tree"<<endl;
    preorder(root);
    cout<<"\nThis is the postorder Travesral of the tree"<<endl;
    postorder(root);
    cout<<"\nThis is the inorder Travesral of the tree"<<endl;
    inorder(root);
    
}