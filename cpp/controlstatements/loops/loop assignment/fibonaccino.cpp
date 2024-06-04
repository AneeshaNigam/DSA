#include<iostream>
using namespace std;
int main(){
    int x=0,y=1,n;
    cin>>n;
    cout<<x<<" ";
    for(int i=1;i<=n-1;i++){
        int z;
        z=x+y;
        cout<<y<<" ";//0 1 1 2 3 5 8 13 ..... upto  
        x=y;
        y=z;
           


    }
}







