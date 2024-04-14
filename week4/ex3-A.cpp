#include <iostream>

using namespace std;

int main() {

    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

 
    cout << "Array daytab1:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    char daytab1_partial[2][12] = {
        {31,28,31,30,31,30,31},
        {31,29,31,30,31,30,31}
    };


    cout << "Array daytab1_partial:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 7; ++j) {
            cout << (int)daytab1_partial[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };


    cout << "Array daytab2:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    char daytab2_partial[2][12] = {
        31,28,31,30,31,30,31,
        31,29,31,30,31,30,31
    };


    cout << "Array daytab2_partial:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 7; ++j) {
            cout << (int)daytab2_partial[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    char daytab3[][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };


    cout << "Array daytab3:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (int)daytab3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
