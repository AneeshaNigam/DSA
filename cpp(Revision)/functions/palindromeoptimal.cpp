#include<iostream>
using namespace std;
bool isPalin(int n);
int main(){
    int n;
    cin>>n;
    if(isPalin(n)){
        cout<<"it's a palindrome";
    }else{
        cout<<"it's not a palindrome";
    }
    
}
bool isPalin(int n){
    int rev=0,temp=n;
    while(temp>0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp/=10;
    }
    if(rev==n){
        return 1;
    }else{
       return 0;
}
}