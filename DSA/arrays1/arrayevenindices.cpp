#include<iostream>
using namespace std;

void evensum(int num){
    int sum=0;
    int arr[num];
    cout<<"Enter the elements you want to enter: ";
    for(int i=0; i<num; i++){
        cin>>arr[i];
        if(i%2!=0){
            sum+=arr[i];
        }
    }
    cout<<sum;    

}
int main(){
    int num;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>num;
    evensum(num);
}