#include <cmath>

int roundNumber(double num) {
    return static_cast<int>(floor(num + 0.5));
}
int roundNumber(double num) {
    int intPart = static_cast<int>(num);
    double decimalPart = num - intPart;
    if (decimalPart >= 0.5) {
        return intPart + 1;
    } else {
        return intPart;
    }
}
