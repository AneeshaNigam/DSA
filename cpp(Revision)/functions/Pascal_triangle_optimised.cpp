//  For notes refer to the coding notes section -Functions (revision)- Pascal triangle 

#include<iostream>
using namespace std;
void pascal_triangle(int n);
int main(){

    int length;
    cout<<"what length of pascal triangle you want: ";
    cin>>length;
    pascal_triangle(length);

    return 0;
}

void pascal_triangle(int n){
    for( int i=0; i<n ;i++){
        int curr=1;
        for(int j=0; j<=i; j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}