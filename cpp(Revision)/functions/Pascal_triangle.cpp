//  For notes refer to the coding notes section -Functions (revision)- Pascal triangle 
#include<iostream>
using namespace std;
void pascal_triangle(int n);
int comb(int n, int r);
int fac(int num);
int main(){

    int length;
    cout<<"what length of pascal triangle you want: ";
    cin>>length;
    pascal_triangle(length);

    return 0;
}
int fac(int num){
    int fac=1;
    for( int i=1; i<=num ;i++){
        fac*=i;
    }
    return fac;
}

int comb( int n, int r){

    int n_fac= fac(n);
    int r_fac= fac(r);
    int n_r_fac= fac(n-r);

    int comb= (n_fac)/(r_fac * n_r_fac);
    return comb;

}

void pascal_triangle(int n){
    for( int i=0; i<=n ;i++){
        for(int j=0; j<=i; j++){
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}