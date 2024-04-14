#include <iostream>

struct Point {
    int x;
    int y;
};


void changeByValue(Point p) {
    std::cout << "Dia chi cua p trong ham : " << &p << std::endl;
    p.x = 100;
    p.y = 200;
}


void changeByReference(Point& p) {
    std::cout << "Dia chi cua p trong ham : " << &p << std::endl;
    p.x = 100;
    p.y = 200;
}

int main() {
    Point p;
    p.x = 0;
    p.y = 0;

    std::cout << "Dia chi cua bien p trong main: " << &p << std::endl;


    std::cout << "Truoc khi goi ham : x = " << p.x << ", y = " << p.y << std::endl;
    changeByValue(p);
    std::cout << "Sau khi goi ham : x = " << p.x << ", y = " << p.y << std::endl;

 
    std::cout << "Truoc khi goi ham : x = " << p.x << ", y = " << p.y << std::endl;
    changeByReference(p);
    std::cout << "Sau khi goi ham : x = " << p.x << ", y = " << p.y << std::endl;

    return 0;
}
