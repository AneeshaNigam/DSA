#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    // 1 3 5 7 8 10 12-31
    // 4 6 9 11 -30
    switch(x<7 && x%2!=0){
        case 1:
        cout<<"31";
    }
switch(x>=8 && x%2==0){
        case 1:
        cout<<"31";
    }

switch(x<7 && x%2!=0){
        case 1:
        cout<<"31";
    }

switch(x==4||x==6||x==9||x==11){
        case 1:
        cout<<"30";
    }
switch(x==2){
        case 1:
        cout<<"28";
    }

}