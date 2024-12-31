//two pass method
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    vector <int> b;
    int n;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    cout<<"Add only zeros and ones as elements: "<<endl;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    int noz= 0, noo=0;
    for(int i=0; i<n ;i++){
        if(a.at(i)==0){ 
            noz++;
        }else if(a.at(i)==1){ 
            noo++;
        }else{
            cout<<"Invalid elements entered";
        }
    }

    for(int i=0; i<noz; i++){
        a[i]=0;
    }

    for(int i=0; i<noo; i++){
        a[i+noz]=1;
    }

    for(int i=0; i<n; i++){
        cout<<a.at(i)<<" ";
    }
}