#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];

    if(n<2) cout<<"less than 2 array can't be used ";


    //input array
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bool flag=false;
    int secondlarg=0;
    int largest=arr[0];


// for base case
    for(int i=0; i<n ;i++){
        if(largest<arr[i]){
            secondlarg=largest;
            largest=arr[i];
            flag=true;
        }
    }

    //checking if all elements are same in the array
    bool flag2=true;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1])
        flag2=false;
    }



    if(flag){
    cout<<"Second largest is: "<<secondlarg;
    }
    else if(flag2){
        cout<<"Since all elements are same second largest element can't be calculated";
    
    }
    else{
        //for case -if the flag is false that means the first element is the largest element

        largest=arr[n-1];
        for(int i=n-1; i>=0 ;i--){
        if(largest<arr[i]){
            secondlarg=largest;
            largest=arr[i];
            
        }
       
    }
    cout<<"Second largest is: "<<secondlarg;
    

    }
}