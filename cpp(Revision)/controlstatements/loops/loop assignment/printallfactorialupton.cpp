//wap to print all the factorials upto n
#include<iostream>
using namespace std;
int main(){
    int f=1,n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        f=1;
        for(j=1;j<=i;j++){
            f*=j; 
        }
        cout<<i<<"!= "<<f<<endl;
    }
}