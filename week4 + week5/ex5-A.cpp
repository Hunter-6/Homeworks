#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int N = 5;

    char str[N];

    cout << "Enter a string (no whitespaces, max length " << N-1 << "): ";
    cin >> str;

    cout << "The string you entered: _" << str << "_" << endl;

    return 0;
}
