#include<iostream>
using namespace std;

int fac(int num);
int perm(int n, int r);
int comb(int n, int r);

int main(){
    int n, r, choice;

    cout<<"Enter the numbers you want to perform the opertaion on: (first being the total no. of distinct objects and second being the no. of selections/arrangements): "<<endl;
    
    cin>>n>>r;
    
    cout<<"Enter 1 for performing permutation and 2 for combination : "<<endl;
    
    cin>>choice;
    
    if(choice==1){

        cout<<"permutation is: "<<perm(n,r);

    } else if(choice==2){
        
        cout<<"combination is: "<<comb(n,r);
    
    } else{

        cout<<"Enter a valid choice";

    }

}

int fac(int num){

    int fac=1;
    for(int i=1; i<=num; i++){
        fac*=i;
    }
    return fac;

}

int perm(int n, int r){
    
    int n_fac = fac(n);
    int n_r_fac = fac(n-r);
    
    int perm = n_fac/n_r_fac;
    return perm;     

}

int comb(int n, int r){

    int r_fac = fac(r);
    int p = perm(n,r);
    
    int comb= p/r_fac;
    return comb;

}
