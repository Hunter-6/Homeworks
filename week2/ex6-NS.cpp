#include <iostream>

using namespace std;

int main() {
  int tu, mau;
  cout << "Nhập tử số: ";
  cin >> tu;
  cout << "Nhập mẫu số: ";
  cin >> mau;

  int ucln = 1;
  for (int i = 1; i <= min(tu, mau); i++) {
    if (tu % i == 0 && mau % i == 0) {
      ucln = i;
    }
  }

  tu /= ucln;
  mau /= ucln;

  cout << "Phân số tối giản là: " << tu << "/" << mau << endl;

  return 0;
}
