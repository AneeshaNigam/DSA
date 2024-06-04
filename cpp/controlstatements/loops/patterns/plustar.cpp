//   *  
//   *
// *****
//   *
//   * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        if (n%2==1){
        if (i==(n+1)/2) cout<<"*";
        else if (j==((n+1)/2)) cout<<"*";
        

        else cout<<" ";
       }
       else{
        cout<<"enter a odd no.";
       }
       }
       cout<<endl;
    }
}
