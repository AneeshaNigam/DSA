#include<bits/stdc++.h>
using namespace std;
int main(){
    stack <int> stack;
    stack.push(1);
    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);

    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
}