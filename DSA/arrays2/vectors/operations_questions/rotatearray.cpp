//Wap to rotate the given array by k steps

#include<iostream>
#include<vector>
using namespace std;
void reversebypart(int s, int e, vector <int> &v){
    for(int i=s,j=e; i<=j ; i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main(){
    vector <int> v;
    int n;
    cout<<"Enter no. of elements you want to enter: ";
    cin>>n;

    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

int k;
cout<<"Enter by how many steps do you want to rotate? "; 
cin>>k;

if(k<n){

    reversebypart(0,n-k-1,v);
    reversebypart(n-k,n-1,v);
    reversebypart(0,n-1,v);
    
}
else{
    int m = k%n;
    reversebypart(0,n-m-1,v);
    reversebypart(n-m,n-1,v);
    reversebypart(0,n-1,v);
}

for(int i=0; i<n ;i++){
    cout<<v.at(i)<<" ";
}
}