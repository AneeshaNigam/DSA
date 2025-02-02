#include<bits/stdc++.h>
using namespace std;
void printQueue(queue <int> a){
    while(!a.empty()){
        cout<<"\t "<<a.front();
        a.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);

    printQueue(a);

    a.pop();
    a.pop();

    printQueue(a);
    
}