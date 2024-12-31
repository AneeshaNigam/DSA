//Move all negative numbers to beginning and positive to the end with constant extra space.
#include<iostream>
#include<vector>
using namespace std;
int move( vector <int> &a){
    int i=0 ,j= (a.size())-1;
    while(i<j){
        if(a[i]<0) i++;
        if(a[j]>0) j--;
        if(i>j) break;
        if(a[i]>0 && a[j]<0){
            int temp= a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        }

}
int main(){
    vector <int> a;
    int n;
    cout<<"no. of elements you want to enter"<<" ";
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    
    move(a);

    for(int i=0; i<n; i++){
        cout<<a.at(i)<<" ";
    }
}