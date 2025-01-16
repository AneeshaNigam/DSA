#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;
void absouldiff(int n){
    int arr[n];
    int resu[n];
    cout<<"Enter the elements you want to enter: ";
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }

    sort(arr, arr + n);
int res=0;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
        res=0;
        for(int j=0;j<n;j++){
            res+=abs(arr[j]-arr[i]);
        }
        resu[i]=res;
        cout<<"The absolute difference is: "<<resu[i]<<endl;
    }


}
int main(){
    int n;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    absouldiff(n);
    

}