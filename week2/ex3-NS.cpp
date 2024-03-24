#include <iostream>

using namespace std;

bool check_triangle(int a, int b, int c) {
  if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
    return false;
  }
  return true;
}

int main() {
  int a, b, c;

  cout << "Nhập độ dài cạnh a: ";
  cin >> a;

  cout << "Nhập độ dài cạnh b: ";
  cin >> b;

  cout << "Nhập độ dài cạnh c: ";
  cin >> c;

  if (check_triangle(a, b, c)) {
    int chu_vi = a + b + c;
    cout << "Chu vi tam giác là: " << chu_vi << endl;

    // Xác định loại tam giác
    if (a == b && b == c) {
      cout << "Đây là tam giác đều." << endl;
    } else if (a == b || b == c || a == c) {
      cout << "Đây là tam giác cân." << endl;
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
      cout << "Đây là tam giác vuông." << endl;
    } else {
      cout << "Đây là tam giác thường." << endl;
    }
  } else {
    cout << "Ba số nhập vào không phải là độ dài 3 cạnh của tam giác." << endl;
  }

  return 0;
}
