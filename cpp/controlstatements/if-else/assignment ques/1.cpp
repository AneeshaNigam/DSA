#include<iostream>
using namespace std;
// int main(){
//     int x,y;
//     cin>>x>>y;
//     if(x>y) cout<<x;
//     else cout<<y;
// }
// int main(){
//     int x,a,c;
//     cin>>x;
//     a=3.14*x*x;
//     c=2*3.14*x;
//     if(a>c) cout<<"area is greater";
//     else cout<<"cricumfrence is greater";
// }
// int main(){
//     int x;
//     cin>>x;
//     if (x%400==0){
//         cout<<"leap year";
//     }
//     else if(x%100==0){
//         cout<<"not a leap year";
//     }
//     else if(x%4==0){
//         cout<<"leap year";
//     }
// }
// int main(){
//     int l,b,a,p;
//     cin>>l>>b;
//     a=l*b;
//     p=2*(l+b);
//     if (a>p) cout<<"area is greater";
//     else cout<<"perimeter is greater";
// }
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a==b && b==c) cout<<"equilateral";
//     else if(a==b) cout<<"isoceles";
//     else if(b==c) cout<<"isoceles";
//     else if(a==c) cout<<"isoceles";
//     else cout<<"scalene";

// }
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a<b){
//         if(a<c){
//             cout<<"a is the least";
//         }
//         else{
//             cout<<"c is the least";
//         }
//     }
//     else if(b<a){
//         if(b<c){
//             cout<<"b is the least";
//         }
//         else cout<<"c is the least";
//     }
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     if(x==0 && y==0) cout<<"origin";
//     else if(x==0) cout<<"on y axis";
//     else if(y==0) cout<<"on x axis";
//     else cout<<"on x,y plane";
// }
// int main(){
//     int x1,y1,x2,y2,x3,y3;
//     cin>>x1>>y1>>x2>>y2>>x3>>y3;
//     int m1=(y2-y1)/(x2-x1);
//     int m2=(y3-y2)/(x3-x2);
//     if(m1==m2) cout<<"the points are on the same line";
//     else cout<<"they are not on the same line";
// }
int main(){
    char x;
    int y;
    cin>>x;
    y=int(x);
    if (y>=65 && y<=90) cout<<"it's an alphabet";
    else if (y>=97 && y<=122) cout<<"it's an alphabet";
    else if (y>=48 && y<=57)cout<<"it's a number";
    else  cout<<"it's a special character";

}