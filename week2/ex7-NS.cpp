#include <iostream>

using namespace std;

int main() {
  int a1, b1, c1, a2, b2, c2;
  cout << "Nhập hệ số a1, b1, c1 của phương trình thứ nhất: ";
  cin >> a1 >> b1 >> c1;
  cout << "Nhập hệ số a2, b2, c2 của phương trình thứ hai: ";
  cin >> a2 >> b2 >> c2;

 
  if (b1 == 0 && b2 == 0) {
    if (a1 * c2 == a2 * c1) {
      cout << "Hệ phương trình có vô số nghiệm." << endl;
    } else {
      cout << "Hệ phương trình vô nghiệm." << endl;
    }
  } else if (b1 == 0) {
    float x = -c1 / a1;
    float y = (a2 * x + c2) / b2;
    cout << "Hệ phương trình có nghiệm duy nhất x = " << x << ", y = " << y << endl;
  } else if (b2 == 0) {
    float x = -c2 / a2;
    float y = (a1 * x + c1) / b1;
    cout << "Hệ phương trình có nghiệm duy nhất x = " << x << ", y = " << y << endl;
  } else {
    float x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    float y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    cout << "Hệ phương trình có nghiệm duy nhất x = " << x << ", y = " << y << endl;
  }

  return 0;
}
