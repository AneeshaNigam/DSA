//wap to print factorial of a given no. n
#include<iostream>
using namespace std;
int main(){
    int f=1,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<f;
}