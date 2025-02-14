#include <iostream>

using namespace std;

int main() {
    int a[4] , b[4], A[4] ; 

    cout<<"Enter the values for 1st matrix" << endl;
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    cout << "Enter the values for 2nd matrix" << endl;
    for (int i = 0; i < 4; i++) {
        cin >> b[i];
    }

    A[0] = (a[0] * b[0]) + (a[1] * b[2]);
    A[1] = (a[0] * b[1]) + (a[1] * b[3]);
    A[2] = (a[2] * b[0]) + (a[3] * b[2]);
    A[3] = (a[2] * b[1]) + (a[3] * b[3]);

    cout << "Matrix after multiplication: " << endl;
    for ( int i = 0; i < 4; i++) {
        cout << A[i] << endl;
    }

    return 0;
}