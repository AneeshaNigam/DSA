#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int sum=0,x,i;
    float y,z;
    cin>>x;
    for(i=0;;i++){

        y=float(x)/10; 

        x/=10;

        z=y-x;
        z=round(z*10);
        cout<<z<<endl;
        
        sum+=z;
        if(x==0){
            break;
        }


    }
    cout<<sum;
}
