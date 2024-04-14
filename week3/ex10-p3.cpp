#include <iostream>
#include <cstring>

using namespace std;

struct ArrayStruct {
    int array[5];
};

struct OtherStruct {
    int data;
};

int main() {
    ArrayStruct original;
    for (int i = 0; i < 5; ++i) {
        original.array[i] = i;
    }

 
    ArrayStruct copy = original;

    
    for (int i = 0; i < 5; ++i) {
        copy.array[i] *= 2;
    }

    
    cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        cout << original.array[i] << " ";
    }
    cout << endl;

    cout << "Copied array: ";
    for (int i = 0; i < 5; ++i) {
        cout << copy.array[i] << " ";
    }
    cout << endl;


    OtherStruct otherOriginal;
    otherOriginal.data = 100;

    OtherStruct otherCopy = otherOriginal;

    otherCopy.data *= 2;

    cout << "Original data: " << otherOriginal.data << endl;
    cout << "Copied data: " << otherCopy.data << endl;

    return 0;
}
