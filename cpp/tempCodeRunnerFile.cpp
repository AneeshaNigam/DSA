//wap to print all alphabets with their respective ascii values
#include<iostream>
using namespace std;
int main(){
    char x='a';
    int y=int(x);
    while(y<=90){
    cout<<to_string(y)<<" y "<<endl;
    y++;
}
}