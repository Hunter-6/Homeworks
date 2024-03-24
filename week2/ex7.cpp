#include <iostream>

using namespace std;

int main() {
    int currentNumber, previousNumber;
    bool isFirstNumber = true;
    
    cout << "Your Input:" << endl;
    
    cin >> currentNumber;
    previousNumber = currentNumber;
    
    while (currentNumber >= 0) {
        if (isFirstNumber) {
            cout << currentNumber << " ";
            isFirstNumber = false;
        } else if (currentNumber != previousNumber) {
            cout << currentNumber << " ";
        }
        
        previousNumber = currentNumber;
        cin >> currentNumber;
    }
    
    cout << currentNumber << endl;
    
    return 0;
}
