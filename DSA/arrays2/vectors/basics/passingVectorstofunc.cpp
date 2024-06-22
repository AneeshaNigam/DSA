#include<iostream>
#include<vector>
using namespace std;
void changed(vector <int> &a){
    a[0]=100;
}
using namespace std;
int main(){
    vector <int> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(23);
    v.push_back(1);

//printing before passing vector in the function
for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
changed(v);

//printing after passing vector in the function
for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


}
