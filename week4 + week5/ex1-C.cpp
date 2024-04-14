#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Enter the number of elements (N <= 10000): ";
    cin >> N;

  
    if (N <= 0 || N > 10000) {
        cout << "Invalid input! N must be a positive integer less than or equal to 10000." << endl;
        return 1;
    }

    vector<bool> seen(N + 1, false); 

    bool hasDuplicate = false;

   
    for (int i = 0; i < N; ++i) {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;

        
        if (seen[num]) {
            hasDuplicate = true; 
            break; 
        } else {
            seen[num] = true; 
        }
    }

  
    if (hasDuplicate) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
