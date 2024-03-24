#include <iostream>

using namespace std;

bool is_prime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

bool is_perfect(int n) {
  int sum_divisors = 1;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      sum_divisors += i + n / i;
    }
  }
  return sum_divisors == n;
}

bool is_square(int n) {
  if (n < 0) {
    return false;
  }
  int sqrt_n = sqrt(n);
  return sqrt_n * sqrt_n == n;
}

int main() {
  int n;
  cout << "Nhập số N: ";
  cin >> n;

  cout << "**Số nguyên tố:**" << endl;
  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      cout << i << " ";
    }
  }

  cout << endl << "**Số hoàn hảo:**" << endl;
  for (int i = 2; i <= n; i++) {
    if (is_perfect(i)) {
      cout << i << " ";
    }
  }

  cout << endl << "**Số chính phương:**" << endl;
  for (int i = 1; i <= n; i++) {
    if (is_square(i)) {
      cout << i << " ";
    }
  }

  return 0;
}
