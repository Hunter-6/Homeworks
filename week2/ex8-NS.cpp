#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a, b, c;
  cout << "Nhập hệ số a, b, c của phương trình bậc hai: ";
  cin >> a >> b >> c;
  
  float delta = b * b - 4 * a * c;
  
  if (delta > 0) {
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);
    cout << "Phương trình có hai nghiệm phân biệt x1 = " << x1 << ", x2 = " << x2 << endl;
  } else if (delta == 0) {
    float x = -b / (2 * a);
    cout << "Phương trình có một nghiệm kép x = " << x << endl;
  } else {
    float
