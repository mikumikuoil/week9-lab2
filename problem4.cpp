#include <iostream>
using namespace std;
int rev(int n, int rev = 0) {
    if (n == 0)
        return rev;
    rev = rev * 10 + n % 10;
    return rev(n/10, rev);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number: " << rev(n) << endl;
    return 0;
}
