#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    vector <int> b;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    for(int j=n; j>0; j--){
        int x=a.at(j-1);
        b.push_back(x);
    }

    for(int i=0; i<n; i++){
        cout<<b.at(i)<<" ";
    }
}
