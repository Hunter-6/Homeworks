#include <iostream>

using namespace std;


void printLine(int M, int N) {
    for (int i = 0; i < M; ++i) {
        cout << " ";
    }
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int numRows;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> numRows;

    for (int i = 1; i <= numRows; ++i) {

        printLine(numRows - i, 2 * i - 1);
    }

    return 0;
}
