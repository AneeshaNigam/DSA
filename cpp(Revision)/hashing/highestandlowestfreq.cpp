#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int low=0,high=0;
    vector<int> frequency(vector<int>&arr){
        vector<int> ans(2);
        map <int,int> mp;
        for(int i=0;i<arr.size()-1;i++){
            
        }

        return ans;
    }
};
    int main(){
        
        int n;
        cout<<"No.of elements";
        cin>>n;

        vector <int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        vector <int> solution=obj.frequency(arr);

        for(auto it: solution){
            cout<<it<<" ";
        }
        
    
}