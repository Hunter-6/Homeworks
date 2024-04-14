#include <iostream>

struct Point {
  int x, y;
};

struct Rect {
  int x, y, w, h;

  bool contains(const Point &point) const {
    return point.x >= x && point.x <= x + w && point.y >= y && point.y <= y + h;
  }
};

int main() {
  Rect rect{10, 20, 50, 30}; 
  Point point{25, 25};

  if (rect.contains(point)) {
    std::cout << "Điểm (" << point.x << ", " << point.y << ") nằm trong hình chữ nhật" << std::endl;
  } else {
    std::cout << "Điểm (" << point.x << ", " << point.y << ") nằm ngoài hình chữ nhật" << std::endl;
  }

  return 0;
}
