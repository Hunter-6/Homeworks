#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, result = 1;
    int y;
    cin >> x >> y;
    for ( int i = 0; i < y; i++) {
        result *= x;

    }

    cout << "x^y = " << result << endl;

    double pow_result = pow(x,y);
    if (abs(result - pow_result) < 1e-6 ) {
        cout << "Checked : Nice!";
    } else "Checked : Noices!";
    return 0;
}
