#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    for(int j=n-1,i=0; i<=j; j--,i++){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(int i=0; i<n; i++){
        cout<<a.at(i)<<" ";
    }
}
