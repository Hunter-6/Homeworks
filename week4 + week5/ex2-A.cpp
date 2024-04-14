#include <iostream>
#include <cstring>

using namespace std;

const int N = 4;


char globalArray[N];

int main() {
    
    char array1[] = "abcd";


    char array2[] = "abcd";


    cout << "Contents of globalArray as array elements:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << globalArray[i];
    }
    cout << endl;
    cout << "Contents of globalArray as string: " << globalArray << endl;

  
    cout << "Contents of array1 as array elements:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << array1[i];
    }
    cout << endl;
    cout << "Contents of array1 as string: " << array1 << endl;

 
    cout << "Contents of array2 as array elements:" << endl;
    for (int i = 0; i < strlen(array2); ++i) {
        cout << array2[i];
    }
    cout << endl;
    cout << "Contents of array2 as string: " << array2 << endl;


    cout << "Size of array2: " << sizeof(array2) << endl;

    return 0;
}
