#include <iostream>

struct Point {
  int x, y;
};

Point mid_point(const Point &p1, const Point &p2) {
  Point mid_point;
  mid_point.x = (p1.x + p2.x) / 2;
  mid_point.y = (p1.y + p2.y) / 2;
  return mid_point;
}

int main() {
  Point point1{10, 20};
  Point point2{30, 40};

  Point mid_point_result = mid_point(point1, point2);

  std::cout << "Trung điểm: (" << mid_point_result.x << ", " << mid_point_result.y << ")" << std::endl;

  return 0;
}
