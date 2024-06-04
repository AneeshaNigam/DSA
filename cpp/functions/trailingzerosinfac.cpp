#include<iostream>
using namespace std;


//this method would overflow the int
int trailZeros(int num);
int main(){
    int num;
    cin>>num;
    cout<<trailZeros(num);
}
int trailZeros(int num){
    int fac=1;
    for(int i=1;i<=num;i++){
        fac*=i;
    }
    
    int trail=0;
    int temp=fac;
    while(temp>0){
        int c=temp%10;
        if(c!=0){
            break;
        }
        trail+=1;
        temp/=10;
    }
    return trail;
}