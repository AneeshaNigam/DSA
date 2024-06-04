#include<iostream>
using namespace std;
// int main(){
//     int x,i,y,j;
//     float r=0,z;
//     cin>>x;
//     //4678
//     for(i=0;;i++){
//         y=x%10;
//         //cout<<y<<endl;
//         x/=10;
//         z=y;
//         for(j=0;j<i;j++){
//             z/=10;
//            //cout<<z<<endl;
//         }
//         r+=z;
//         //cout<<r<<endl;
        


//         if(x==0) break;

//     }
//     for (int k=0;k<i;k++){
//     r*=10;
//     }
//     cout<<r<<endl;
    
// }


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //4768
    int lastDigit=0;
    int reverse=0;
    while(n>0){
        lastDigit=n%10;//7
        reverse*=10;//80
        reverse+=lastDigit;//87
        n/=10;//467
    }
    cout<<reverse;
}