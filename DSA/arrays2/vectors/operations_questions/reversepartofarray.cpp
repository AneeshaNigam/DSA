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

    int s,e;
    cout<<"What part of array you want to reverse? give the starting range no. and ending range no. ";
    cin>>s>>e;

    if (s < 0 || e >= n || s > e) {
        cerr << "Invalid range specified." << endl;
        return 1;
    }

    for(int i=s,j=e;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(int i=0; i<n; i++){
        cout<<a.at(i)<<" ";
    }

}
