#include <iostream>

using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << "Greatest common divisor of " << num1 << " and " << num2 << " is: " << result << endl;

    if (areCoprime(num1, num2)) {
        cout << num1 << " and " << num2 << " are coprime." << endl;
    } else {
        cout << num1 << " and " << num2 << " are not coprime." << endl;
    }

    return 0;
}
