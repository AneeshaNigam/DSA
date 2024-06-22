#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int e;
    int count =0;
    cin>>e;
    for (int i=0; i<n; i++){
        if(arr[i]==e){
            cout<<"present";
            count++;
            break;
            
        }
    }
    if(count==0) cout<<"not present";
}