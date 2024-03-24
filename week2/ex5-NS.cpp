#include <iostream>

using namespace std;

int main() {
  int x, y;
  cout << "Nhập x: ";
  cin >> x;
  cout << "Nhập y: ";
  cin >> y;

  int ucln = 1;
  for (int i = 1; i <= min(x, y); i++) {
    if (x % i == 0 && y % i == 0) {
      ucln = i;
    }
  }

  cout << "Ước số chung lớn nhất của " << x << " và " << y << " là: " << ucln << endl;

  return 0;
}
