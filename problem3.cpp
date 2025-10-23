#include <iostream>
using namespace std;
int gcd(int num1, int num2) {
    int n;
    if(num1==num2) {
        n=num1/2;
    }
    else if(num1>num2) {
        n=num2;
    }
    else {
        n=num1;
    }
    while (n>0) {
        if (num1%n==0 && num2%n==0) {
            return n;
        }
        n--;
    }
    return 1;
}
int main() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD is "<<gcd(a,b)<<endl;
    return 0;
}