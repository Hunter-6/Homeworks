#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Nhập số nguyên dương: ";
  cin >> n;

  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }

  cout << "Tổng các chữ số của số " << n << " là: " << sum << endl;

  return 0;
}
