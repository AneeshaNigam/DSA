//Two pointers- important
#include<iostream>
#include<vector>
using namespace std;
void sort(vector <int> &v){
    for(int i=0,j=v.size()-1;i<j;){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main(){

 
    vector <int> v;
    
    int n;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    cout<<"Add only zeros and ones as elements: "<<endl;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}
