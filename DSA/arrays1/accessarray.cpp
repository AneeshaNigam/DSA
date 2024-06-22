//Given an array of marks of students, if the marks of any student is less than 35 print it's roll number.

#include<iostream>
using namespace std;
int main()  {
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks of the students: ";
    for(int i=0;i<n;i++)  {
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)  {
        if(marks[i]<35)  {
            cout<<"Roll number of the student who has failed is: "<<i+1<<endl;
        }
    }
}