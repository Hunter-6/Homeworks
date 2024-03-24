#include <iostream>

using namespace std;

int main() {
  int fahrenheit;
  cout << "Nhập nhiệt độ Fahrenheit: ";
  cin >> fahrenheit;

  float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
  float kelvin = celsius + 273.15;

  cout << "Fahrenheit" << "\t" << "Celsius" << "\t" << "Absolute Value" << endl;
  cout << fahrenheit << "\t" << celsius << "\t" << kelvin << endl;

  return 0;
}
