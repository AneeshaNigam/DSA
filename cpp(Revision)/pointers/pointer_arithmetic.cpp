#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p = &a;
    p = p+1;
    cout<<*(p-1);
}