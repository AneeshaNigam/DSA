#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0,i;
//     for (i=1;i<=n;i++){
//         if(i%2==0){.
//             sum-=i;
//             cout<<"-"<<i;
//         }
//         else{
//             sum+=i;
//             cout<<'+'<<i;
//         }
//     }
//     cout<<"\n"<<sum<<endl;ttttttt
// }
int main(){
    int n,sum;
    cin>>n;
    if (n%2==0) sum=-n/2;
    else sum=-n/2+n;
    cout<<sum;

}











