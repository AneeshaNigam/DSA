#include <iostream>
using namespace std;

int gcd(int num1, int num2);
int lcm(int num1, int num2);

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << lcm(num1, num2);
}

int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int lcm(int num1, int num2) {
    
    return (num1 / gcd(num1, num2)) * num2;
}
