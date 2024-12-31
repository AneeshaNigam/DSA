#include<iostream>
#include<vector>

using namespace std;

void sort( vector <int> &v){

    int noo=0,noz=0;
    for(int i=0; i<v.size(); i++){
        if(v.at(i)==0) noz++;
        if(v.at(i)==1) noo++;
    }

    for(int i=0; i<noz; i++){
        v[i]=0;
    }

    for(int i=0; i<noo; i++){
        v[i+noz]=1;
    }

}

int main(){
    vector <int> a;
    int n;
    cout<<"no. of elements you want to enter"<<" ";
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    
    sort(a);

    for(int i=0; i<n; i++){
        cout<<a.at(i)<<" ";
    }
}


 