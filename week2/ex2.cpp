#include <iostream>

using namespace std;

void printTriang(int n) {
  for (int i = n; i > 0; i--) {
    for (int j = 0; j < n - i; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  printTriang(n);
  return 0;
}
