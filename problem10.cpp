#include <iostream>
using namespace std;
void decToBin(int n) {
    if (n == 0)
        return;
    decToBin(n / 2);
    cout << n % 2;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0)
        cout << 0;
    else
        decToBin(n);
    cout << endl;
    return 0;
}
