#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  } else if (n <= 3) {
    return true;
  } else if (n % 2 == 0 || n % 3 == 0) {
    return false;
  }
  int i = 5;
  while (i * i <= n) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
    i += 6;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  if (isPrime(n)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
  return 0;
}
