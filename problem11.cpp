#include <iostream>
using namespace std;

bool Prime(int n,int i=2) {
    if (n <= 1)
        return false;
    if (i * i > n)
        return true;
    if (n % i == 0)
        return false;
    return Prime(n, i + 1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (Prime(n))
        cout << "true";
    else
        cout << "false";
    cout << endl;
    return 0;
}
