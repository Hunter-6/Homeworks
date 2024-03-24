#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Nhập số lượng số thực: ";
  cin >> n;

  float max_value = -1e9;
  float min_value = 1e9;
  for (int i = 1; i <= n; i++) {
    float x;
    cin >> x;

    if (x > max_value) {
      max_value = x;
    }
    if (x < min_value) {
      min_value = x;
    }
  }

  cout << "Giá trị lớn nhất: " << max_value << endl;
  cout << "Giá trị nhỏ nhất: " << min_value << endl;

  return 0;
}
