#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, _x, _y, large, div_x, div_y, sim_x, sim_y;
    cout << "Enter the coefficients of x and y where x and y are from the equation ax+by=0: ";
    cin >> x >> y;

    _x = abs(x);
    _y = abs(y);

    (_x > _y) ? large = _x : large = _y;

    for (int i = large; i >=2; i--) {
        div_x = _x / i;
        div_y = _y / i;

        if ( ( (_x % i) == 0 ) && ( (_y % i) == 0 ) ) {
            cout << "Coefficients of x = " << div_x << " and of y = " << div_y << endl;
            sim_x = div_x;
            sim_y = div_y;
            break;
        }
    }

    return 0;
}