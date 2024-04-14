#include <iostream>

using namespace std;
int isPrime(int number) {
    if (number <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    cout << "Prime numbers less than " << N << ":" << endl;
    for (int i = 2; i < N; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
