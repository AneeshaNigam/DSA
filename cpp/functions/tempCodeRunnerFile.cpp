#include<iostream>
using namespace std;
void primeFac(int num);
int main(){
    int num;
    cout << "Please enter a number: "; // Added prompt for clarity
    cin>>num;
    primeFac(num);
}
void primeFac(int num){
    if(num<=1) return;
    for(int i=2; i*i <=num; i++){
        while(num%i==0){
            cout<<i<<" ";
            num=num/i;
        }
    }
    if(num>1)
    cout<<num;
}