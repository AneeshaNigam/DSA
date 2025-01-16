#include<iostream>
using namespace std;
int main(){
    int i=0;
    int num;
    cout<<"enter num: ";
    cin>>num;
    while(num>0){
        num=num/2;
        i++;
    }
    cout<<i;
}