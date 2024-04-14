#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p;

    std::cout << "Dia chi cua bien p: " << &p << std::endl;
    std::cout << "Dia chi cua truong x: " << &(p.x) << std::endl;
    std::cout << "Dia chi cua truong y: " << &(p.y) << std::endl;

    return 0;
}
