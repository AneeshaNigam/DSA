#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set <int> a;
    a.insert(5);
    a.insert(10);
    for( auto it=a.begin(); it!=a.end();it++){
        cout<< *it<<" ";
    }

    cout<<endl;

    if(a.find(5)!=a.end()) cout<<5<<" is present";
    a.erase(a.begin());

    cout<<endl;

    for( auto it=a.begin(); it!=a.end();it++){
        cout<< *it<<" ";
    }

    cout<<endl;
    cout<<a.empty();
    cout<<endl;
    
    cout<<a.max_size();
}