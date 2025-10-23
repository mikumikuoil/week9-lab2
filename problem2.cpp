#include <iostream>
using namespace std;
int main() {
    int num,grade;
    int total=0.00;
    float avg=0.00;
    cout<<"Enter the number of students (1-100): ";
    cin>>num;
    while(num<1 || num>100) {
        cout<<"Invalid input, enter again: ";
        cin>>num;
    }
    for (int i = 1; i <= num; i++) {
        cout<<"Enter student grade(0-100): ";
        cin>>grade;
        while(grade<1 || grade>100) {
            cout<<"Invalid input, enter again: ";
            cin>>grade;
        }
        total+=grade;
    }
    avg=float(total)/float(num);
    cout<<"Average grade: "<<avg<<endl;
}