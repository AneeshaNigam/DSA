#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr;
    int n;
    cout<<"enter no. of elements you want to insert";
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}