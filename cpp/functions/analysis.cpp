//sum of n natural no.s


//1st algo- loop
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    
    cout<<sum;
}


//2nd algo- formula
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<((n)*(n+1))/2;
}
