#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Nhập số N: ";
  cin >> n;

  bool is_fibonacci = false;
  int a = 0, b = 1, c;
  while (c <= n) {
    c = a + b;
    if (c == n) {
      is_fibonacci = true;
      break;
    }
    a = b;
    b = c;
  }

  if (is_fibonacci) {
    cout << n << " là số Fibonacci." << endl;
  } else {
    cout << n << " không phải là số Fibonacci." << endl;
  }

  cout << "Các số Fibonacci nhỏ hơn hoặc bằng N: ";
  a = 0;
  b = 1;
  while (c <= n) {
    cout << c << " ";
    c = a + b;
    a = b;
    b = c;
  }

  return 0;
}
