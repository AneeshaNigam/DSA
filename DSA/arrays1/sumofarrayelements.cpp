//Given an array of size n prin the sum of all elements
#include<iostream>
using namespace std;

void arraysum(int num){
    int sum=0;
    int arr[num];
    cout<<"Enter the elements you want to enter: ";

    for(int i=0; i<num; i++){
        int x;
        cin>>x;
        arr[i]=x;
        sum+=arr[i];
    
        
    } 
    cout<<sum;
       
}
int main(){
    int num;
    cout<<"The number of elements you want to add in the array: ";
    cin>>num;
    int arr[num];
    arraysum(num);
    

}