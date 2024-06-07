#include<iostream>
using namespace std;
void first_lastd(int num);

int main(){

    int n;
    cin>>n;
    first_lastd(n);

}

void first_lastd(int num){
    
    int fd;
    for(int i=num;i>0;i/=10){
        fd=i%10;
    }

    int ld=num%10;
    cout<<"first digit: "<<fd<<endl;
    cout<<"last digit: "<<ld<<endl;
    
}