//code to count digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0,i=n;
    while(i>0){
        i=i/10;
        count+=1;
        // if((i<1) && (i!=0)){
        //     break;
        // }
        } 
    cout<<count;
}



    