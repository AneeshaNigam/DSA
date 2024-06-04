#include<iostream>
using namespace std;
int main(){
    int a,b;
    int result=1;
    cin>>a>>b;
    for (int i=1;i<=b;i++){
        result*=a;

    }
    cout<<result;
}