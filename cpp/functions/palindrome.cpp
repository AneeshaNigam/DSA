#include<iostream>
using namespace std;
int main(){
    // Declare and initialize variables
    int n, m=0, c=0, r=0, count=0;
    
    // Read input number
    cin>>n;
    
    // Copy the input number to another variable
    int i=n;

    // Count the number of digits in the input number
    while(i>0){
       i/=10;
       count++;
    }
    
    // Reset 'i' to the input number
    i=n;

    // Loop through each digit of the number
    while(i>0){
        // Get the last digit of the number
        c=i%10;
        // Remove the last digit from the number
        i/=10;
        
        // Multiply 'c' by 10 for 'count-1' times
        for (m=count;m>1;m--) {
            c*=10;
        }  
        
        // Decrement the count
        count--;
        
        // Add 'c' to the result 'r'
        r+=c;
    }
    
    // Print the result
    cout<<r<<endl;

    if(r==n){
        cout<<"it's a palindrome";
    }else{
        cout<<"it's not a palindrome";
    }
}

