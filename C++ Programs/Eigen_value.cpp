#include <iostream> 
#include <cmath>

using namespace std;

int main() {
    int arr[4], a, b, c;
    cout << "Enter 2x2 matrix: ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    // To convert the Martix to the equation ax^2 + bx + c = 0
    a = 1;
    b = ( - ( arr[0] ) - ( arr[3] ) );
    c = ( arr[0] * arr[3] ) - ( arr[1] * arr[2] );

    cout << " a = " << a << " b = " << b << " c = " << c << endl;

    // To find the roots of the equation
    int r1, r2;
    r1 = ( - (b) + sqrt( (  b * b ) - ( 4 * a * c ) ) ) / ( 2 * a);
    r2 = ( - (b) - sqrt( (  b * b ) - ( 4 * a * c ) ) ) / ( 2 * a);
    cout << "Eigen Value of the matrix is \n First root = " << r1 << " And Second root = " << r2 << endl;

    // To find the Eigen vector of the First root
    int x = ( - ( arr[1] ) );
    int y = ( - ( arr[0] - r1 ) );
    cout << "Eigen vector of the First root is: " << x << " And Second root is: " << y << endl;

    // To find the Eigen Vector of the Second root
    int _x = ( - ( arr[1] ) );
    int _y = ( - ( arr[0] - r2 ) );
    cout << "Eigen vector of the First root is: " << _x << " And Second root is: " << _y << endl;

    return 0;
}