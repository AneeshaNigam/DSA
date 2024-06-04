// wap taking float input and preinting the fractional part of the real number
#include <iostream>
using namespace std;
int main() {
   float x,y;
   cin>>x;
   if (x<0){
   y=abs(x);
   cout<<1-(y-(int)y);
   }
   else{
   cout<<x-int(x);
}
}


