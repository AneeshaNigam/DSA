//Find the doublet in the array whose sum is equal to the given value
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter the no. of elements you want to enter: ";
    cin>>n;
    cout<<"Enter the elements: ";

    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int *ptr1= &v[0];
    int *ptr2= &v[1];
    int sum;

    cout<<"Enter the sum: ";
    cin>>sum;

    for(int i=0; i<n; i++){
    ptr1= &v[i];
    ptr2= &v[i+1]; 
        for(int j=i+1; j<n; j++){
            if((*ptr1)+(*ptr2)==sum){
                cout<<*ptr1<<" and "<<*ptr2<<" are doublets"<<endl;
            }
            ptr2++;
        }
        ptr1++;
    }
}
