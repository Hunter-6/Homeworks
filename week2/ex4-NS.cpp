#include <iostream>

using namespace std;

int main() {
  int x, y;
  cout << "Nhập x: ";
  cin >> x;
  cout << "Nhập y: ";
  cin >> y;

  int bcnn = 1;
  for (int i = 1; i <= x * y; i++) {
    if (i % x == 0 && i % y == 0) {
      bcnn = i;
      break;
    }
  }

  cout << "Bội số chung nhỏ nhất của " << x << " và " << y << " là: " << bcnn << endl;

  return 0;
}
