#include <iostream>
#include <string>
using namespace std;
int maxDigit(const string &s, int i, int currentMax) {
    if (i == s.length())
        return currentMax;
    int digit = s[i] - '0';
    if (digit > currentMax)
        currentMax = digit;
    return maxDigit(s, i + 1, currentMax);
}
int maxdigit(int n) {
    string s = to_string(abs(n)); // handle negatives
    return maxDigit(s, 0, 0);
}
int main() {
    int n;
    cin >> n;
    cout << maxdigit(n);
    return 0;
}
