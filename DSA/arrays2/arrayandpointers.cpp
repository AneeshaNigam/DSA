#include<iostream>
using namespace std;
int func(int arr[]);
int main(){
    int arr[]={1,2,3,4};
    int *ptr = arr;
    for(int i=0 ; i <=3; i++){
        cout<<*ptr<<" ";
        ptr++;  //this would work because array has continouds memory allocation
    } 
    ptr=arr;    //it will reset the pointer to the first element of the array
}