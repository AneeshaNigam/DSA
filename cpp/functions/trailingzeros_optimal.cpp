#include<iostream>
using namespace std;
int trailZero(int num);
int main(){
    int num;
    cin>>num;
    cout<<trailZero(num);
}
int trailZero(int num){
    
    int trailZeros = 0;
    for(int i = 5; i <= num; i*=5){
        trailZeros += num/i;
    }
    return trailZeros;
}