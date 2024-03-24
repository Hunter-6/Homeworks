#include <iostream>

using namespace std;

bool is_square(int n) {
  if (n < 0) {
    return false;
  }
  int sqrt_n = sqrt(n);
  return sqrt_n * sqrt_n == n;
}

int main() {
  int n;
  cout << "Nhập số nguyên dương n: ";
  cin >> n;

  if (is_square(n)) {
    cout << n << " là số chính phương." << endl;
  } else {
    cout << n << " không phải là số chính phương." << endl;
  }

  return 0;
}
