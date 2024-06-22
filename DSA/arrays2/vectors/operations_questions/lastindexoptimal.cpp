//find the last occurance of x in the array
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(23);
    v.push_back(1);

    int x;
    cout<<"enter the element to be found";
    cin>>x;


//this optimal as we start the traversal from the back and once the element is found that would be the last occurance and the loop breaks
//although for the worst case scenario it's still going to traverse the whole array

    int last=INT_MIN;
    for(int i=(v.size()-1); i>=0; i--){
        if(v.at(i)==x){
            last=i;
            break;
        }
    }

    if(last!=INT_MIN){
        cout<<"the last occurance was found at "<<last<<" index";
    }else{
        cout<<"the number was not found in the array";
    }
        
}