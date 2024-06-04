#include<iostream>
using namespace std;
int fac(int num);
int main(){
    int n;
    cin>>n;
    cout<<fac(n);
}
int fac(int num){
    int fac=1;
    for(int i=1;i<=num;i++){
        fac*=i;
    }
    return fac;
}