#include <iostream>

using namespace std;

struct Point {
  int x, y;
};

void printPointValue(Point p) { 
  cout << "Giá trị bên trong hàm: " << p.x << ", " << p.y << endl;
  p.x = 200; 
}

void printPointReference(Point &p) { 
  cout << "Giá trị bên trong hàm: " << p.x << ", " << p.y << endl;
  p.x = 200; 
}

int main() {
  Point point{10, 20};

  cout << "Giá trị ban đầu: " << point.x << ", " << point.y << endl;

  printPointValue(point);
  cout << "Giá trị sau khi truyền tham trị: " << point.x << ", " << point.y << endl;

  printPointReference(point);
  cout << "Giá trị sau khi truyền tham biến: " << point.x << ", " << point.y << endl;

  return 0;
}
