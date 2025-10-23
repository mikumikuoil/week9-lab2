#include <iostream>
using namespace std;
int sum(int n, int i=1, int summ=0) {
    if (i<=n) {
        if (i%2==0) {
            summ+=i;
        }
        return sum(n,i+1,summ);
    }
    return summ;
}
int main() {
    int n;
    cin >> n;
    cout << sum(n);
}