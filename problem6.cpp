#include <iostream>
using namespace std;
int digits(int n) {
    if (n==0)
        return 0;
    return 1+digits(n/10);
}
int main() {
    int num;
    cin >> num;
    if (num==0)
        cout <<1<<endl;
    else
        cout<<digits(abs(num))<<endl;
}
