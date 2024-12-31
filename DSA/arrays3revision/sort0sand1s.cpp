#include<iostream>
#include<vector>
using namespace std;
void sort(vector <int> &a, int n){
    int noo =0,noz=0;

    for(int i=0;i<n;i++){
        int x=a.at(i);
        if(x==0){
            noz++;
        } else{
            noo++;
        }
    }

    for(int i=0;i<noz;i++){
        a.at(i)=0;
    }
    for(int i=noz;i<noo+noz;i++){
        a.at(i)=1;
    }
    
      for(int i=0;i<n;i++){
        cout<<a.at(i)<<" ";
    }
    


}
int main(){
    vector <int> a; 
    int n;
    cout<<"Enter no. of elements you wish to enter: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    
    sort(a,n);
}