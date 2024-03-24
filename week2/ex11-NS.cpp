#include <iostream>

using namespace std;

int main() {
  int min, max, step_size;
  cout << "Nhập Min: ";
  cin >> min;
  cout << "Nhập Max: ";
  cin >> max;
  cout << "Nhập Step_size: ";
  cin >> step_size;

  cout << "Fahrenheit" << "\t" << "Celsius" << "\t" << "Absolute Value" << endl;
  for (int fahrenheit = min; fahrenheit <= max; fahrenheit += step_size) {
    float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    float kelvin = celsius + 273.15;
    cout << fahrenheit << "\t" << celsius << "\t" << kelvin << endl;
  }

  return 0;
}
