#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int decimal) {
    string binary = ""; 


    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = to_string(remainder) + binary; 
        decimal /= 2;
    }

    return binary;
}


int binaryToDecimal(const string& binary) {
    int decimal = 0;
    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0'); 
    }

    return decimal;
}

int main() {
    int decimalNumber = 42; 
    string binaryNumber = decimalToBinary(decimalNumber); 
    int convertedDecimalNumber = binaryToDecimal(binaryNumber);

    cout << "Decimal to Binary: " << decimalNumber << " -> " << binaryNumber << endl;
    cout << "Binary to Decimal: " << binaryNumber << " -> " << convertedDecimalNumber << endl;

    return 0;
}
