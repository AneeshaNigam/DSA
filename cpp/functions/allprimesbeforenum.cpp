#include<iostream>
using namespace std;
bool prime(int num);
void allprime_beforenum(int num);
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    allprime_beforenum(num);
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

void allprime_beforenum(int num){
    int i=2;
    if(i<num) cout<<i<<" ";
    for(i = 3; i <= num ; i+=2){
    if(prime(i)){
        cout<<i<<" ";
    }
    }

}
