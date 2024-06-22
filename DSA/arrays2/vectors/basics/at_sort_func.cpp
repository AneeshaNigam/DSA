#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(23);
    v.push_back(1);
    
    cout<<v.at(4)<<endl; //this accesses the value at index 4

    v.at(4)=54;    //we can also update values using this


    //sorting an array
    sort(v.begin(),v.end());

    //printing the array
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}