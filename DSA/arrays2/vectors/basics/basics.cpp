#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr; //this is how we declare a vector

    //inserting elements
    arr.push_back(6);
    // cout<<arr.size()<<endl;  //1
    cout<<arr.capacity()<<endl; //1
    arr.push_back(1);
    // cout<<arr.size()<<endl;  //2
    cout<<arr.capacity()<<endl; //2
    arr.push_back(9);
    // cout<<arr.size() <<endl; //3
    cout<<arr.capacity()<<endl; //4 
    arr.push_back(10);
    // cout<<arr.size() <<endl; //4
    cout<<arr.capacity()<<endl; //4

    // capacity is always doubled once full whereas size represents the no. of elements
    
    //we can't use arr[] method here for initialisation 

    //although we can access it through []
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";

}