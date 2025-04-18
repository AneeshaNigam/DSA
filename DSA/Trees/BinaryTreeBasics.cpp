#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data=value;
            left=nullptr;
            right=nullptr;
        }

};

void preOrder(Node* root){
    if(root==nullptr){
        cout<<-1<<" ";
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


int main(){
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    preOrder(root);
}
