#include<iostream>
using namespace std;
bool prime(int num);
void PrimeFac(int num);
int main(){
    int num;
    cin>>num;
    PrimeFac(num);
}
bool prime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (num == 2 || num == 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Any number divisible by 2 or 3 is not prime
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // Check for divisors of the form 6k ± 1
        }
    }

    return true; // If no divisors are found, the number is prime
}

void PrimeFac(int num){
    int count=0;
    for(int i=1 ; i <= num; i++){
        if(prime(i) && (num%i==0)){
            cout<<i<<" ";
            count+=1;
        } else{
            continue;
        }
        
    }
    if(count>0){
            cout<< "are the prime factors";
        } else {
            cout<<"there are no the prime factors";
        }
    }
