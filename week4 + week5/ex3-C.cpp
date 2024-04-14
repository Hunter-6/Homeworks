#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int n) {

    string str = to_string(n);
    int left = 0;
    int right = str.length() - 1;

    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int countPalindromicNumbers(int A, int B) {
    int count = 0;
    
    for (int i = A; i <= B; ++i) {
        if (isPalindrome(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A, B;
        cin >> A >> B; 
        cout << countPalindromicNumbers(A, B) << endl;
    }

    return 0;
}
