#include <iostream>

using namespace std;

int countDistinctSubstrings(const char* str) {
    int count = 0;
    while (*str) {
        const char* next = str + 1;
        while (*next) {
            const char* p1 = str;
            const char* p2 = next;
            while (p1 != next && *p1 == *p2) {
                p1++;
                p2++;
            }
            if (p1 == next) {
                count++;
            }
            next++;
        }
        str++;
    }
    return count;
}

int main() {
    char ch;
    char input[1000];
    int length = 0;

    cout << "Nhap chuoi ky tu English:" << endl;

    while (cin.get(ch)) {
        if (ch == '\n') {
            break;
        }
        input[length++] = ch;
    }

    cout << "So day con khac nhau: " << countDistinctSubstrings(input) << endl;

    return 0;
}
