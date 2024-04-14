#include <iostream>

using namespace std;

int main() {
    const int N = 4;
    char arr[N];
    char var1, var2, var3;


    for (int i = 0; i < N; ++i) {
        arr[i] = 'A' + i;
    }
    var1 = 'a';
    var2 = 'b';
    var3 = 'c';


    cout << "Reading overflow:" << endl;
    cout << "arr[-1]: " << arr[-1] << endl;
    cout << "arr[N]: " << arr[N] << endl;
    cout << "arr[N+1]: " << arr[N+1] << endl;
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    cout << "var3: " << var3 << endl;


    char var4, var5;
    var4 = 'd';
    var5 = 'e';


    cout << "\nReading overflow after changing declaration order:" << endl;
    cout << "arr[-1]: " << arr[-1] << endl;
    cout << "arr[N]: " << arr[N] << endl;
    cout << "arr[N+1]: " << arr[N+1] << endl;
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    cout << "var3: " << var3 << endl;
    cout << "var4: " << var4 << endl;
    cout << "var5: " << var5 << endl;


    arr[-1] = 'X';
    arr[N] = 'Y';
    arr[N+1] = 'Z';


    cout << "\nValues after overflow writing:" << endl;
    cout << "arr: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    cout << "var3: " << var3 << endl;


    const int M = 3;
    char arr2D[M][N];


    for (int i = 0; i < N + 2; ++i) {
        arr2D[0][i] = '!';
    }


    cout << "\n2D Array after overflow writing:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
