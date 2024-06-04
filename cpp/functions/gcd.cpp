#include<iostream>
using namespace std;
int gcd(int num1, int num2);
int main(){
    int num1,num2;
    cin>>num1;
    cin>>num2;
    cout<<gcd(num1,num2);
}
int gcd(int num1, int num2){
    int div=1;
    if(num1>num2){
        for(int i=num2 ; i>0 ; i--){
            if(num1%i==0 && num2%i==0){
                div=i;
                break;
            }
        }
    }else{
        for(int i=num1 ; i>0 ; i--){
            if(num1%i==0 && num2%i==0){
                div=i;
                break;
            }
    }
    return div;
}
}