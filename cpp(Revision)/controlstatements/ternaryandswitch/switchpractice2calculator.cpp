#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    cout<<"enter operation you want to perform";
    char ch;
    cin>>ch;
    switch(ch){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '/':
        cout<<a/b;
        break;
        case '*':
        cout<<a*b;
        break;
        default:
        cout<<"Enter valid operator";
    }
}