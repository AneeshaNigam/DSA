//wap to check if the given no. is prime or not
#include<iostream>
using namespace std;
int main(){
    int x,i,j;
    cin>>x;
    for(i=2;i<x-1;i++){
        if (x%i==0) {
        cout<<"it's not a prime no."; 
        j=1;
        break;
    }
    }
    if (j!=1){
        cout<<"it's a prime no.";
    }

}
