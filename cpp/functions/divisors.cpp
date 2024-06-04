#include<iostream>
using namespace std;
void divisors(int num);
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    divisors(num);
}
void divisors(int num){
    int div=1;
    for(int i=1 ; i*i<=num ; i++ ){
        if(num%i==0){
            cout<<i<<" ";
            if( i != num/i )
            cout<<num/i<<" ";
        }
    }
    cout<<"are the divisors";
}