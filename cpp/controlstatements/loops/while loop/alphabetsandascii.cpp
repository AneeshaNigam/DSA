//wap to print all alphabets with their respective ascii values
#include<iostream>
using namespace std;
int main(){
    char x='A';
    int y=int(x);
    while(y<=90){
    cout<<char(y)<<"  "<<y<<endl;
    y++;
}
}