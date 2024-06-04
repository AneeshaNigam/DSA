#include<iostream>
using namespace std;
void pattern(int num);
int main(){
    int num;
    cin>>num;
    pattern(num);
}
void pattern(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){    
            cout<<"*";
        }
        cout<<endl;
    }
}
