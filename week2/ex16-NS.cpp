#include <iostream>

using namespace std;

int main() {
  int n;
  do {
    cout << "Nhập vào một số trong khoảng 0..9: ";
    cin >> n;

    if (n < 0 || n > 9) {
      cout << "Giá trị nhập vào không nằm trong khoảng 0..9." << endl;
      break;
    }

    switch (n) {
      case 0:
        cout << "Vừa nhập chữ số không" << endl;
        break;
      case 1:
        cout << "Vừa nhập chữ số một" << endl;
        break;
      case 2:
        cout << "Vừa nhập chữ số hai" << endl;
        break;
      case 3:
        cout << "Vừa nhập chữ số ba" << endl;
        break;
      case 4:
        cout << "Vừa nhập chữ số bốn" << endl;
        break;
      case 5:
        cout << "Vừa nhập chữ số năm" << endl;
        break;
      case 6:
        cout << "Vừa nhập chữ số sáu" << endl;
        break;
      case 7:
        cout << "Vừa nhập chữ số bảy" << endl;
        break;
      case 8:
        cout << "Vừa nhập chữ số tám" << endl;
        break;
      case 9:
        cout << "Vừa nhập chữ số chín" << endl;
        break;
    }
  } while (true);

  return 0;
}
