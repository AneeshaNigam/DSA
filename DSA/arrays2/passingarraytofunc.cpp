#include<iostream>
using namespace std;
int display(int arr[]);
int change(int arr[]);
int main(){
    int arr[]={1,2,3,4,5};
    display(arr);
    change(arr);
    display(arr);
    return 0;
}
int change(int arr[]){
    arr[0]=10;
}
int display(int arr[]){
    for(int i=0;i<5;i++){   
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}   
