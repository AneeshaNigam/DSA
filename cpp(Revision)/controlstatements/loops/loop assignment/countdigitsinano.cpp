#include<iostream>
#include<string>
using namespace std;
int main(){
    int x,i;
    cin>>x;
    for(i=0;;i++){
        x/=10;
        if(x==0){
            i++;
            break;
        }
    }
    cout<<i<<" are the no. of digits in the no.";
}