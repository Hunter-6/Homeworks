#include <iostream>

using namespace std;

const int N = 4;


int globalArray[N];

int main() {
   
    int array1[N] = {1, 2, 3, 4};

    
    int array2[] = {1, 2, 3, 4};

    
    cout << "Contents of globalArray:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << globalArray[i] << " ";
    }
    cout << endl;

    
    cout << "Contents of array1:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << array1[i] << " ";
    }
    cout << endl;

    
    cout << "Contents of array2:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << array2[i] << " ";
    }
    cout << endl;

    return 0;
}
