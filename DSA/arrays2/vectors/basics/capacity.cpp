#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(13);
    v.push_back(14);

    cout<<v.capacity() <<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<v.capacity()<<endl;

}