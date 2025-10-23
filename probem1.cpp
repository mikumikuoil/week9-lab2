#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    for (int i = 1; i <= 100; i++) {
        cout << rand() << endl;
    }
}