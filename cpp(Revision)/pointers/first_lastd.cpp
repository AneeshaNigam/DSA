#include<iostream>
using namespace std;
void first_lastd(int num, int *ptr1, int *ptr2);
int main(){
    int num,fd,ld;
    cin>>num;
    int *ptr1= &fd;
    int *ptr2= &ld;
    first_lastd(num, ptr1, ptr2);
    cout<<"first digit: "<<fd<<endl;
    cout<<"last digit: "<<ld<<endl;

}
void first_lastd(int num, int *ptr1, int *ptr2){
    *ptr2 = num%10;
    for(int i=num; i>0; i/=10){
        *ptr1=i%10;
    }
}