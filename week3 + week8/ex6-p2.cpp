#include <iostream>
#include <string>

struct Rect {
    float x, y, width, height;
};

struct Ship {
    Rect rect;
    std::string id;
    float dx, dy;
};

void move(Ship& ship) {
    // Di chuyển tàu theo vận tốc hiện hành
    ship.rect.x += ship.dx;
    ship.rect.y += ship.dy;
}

void display(const Ship& ship) {
    // Hiển thị thông tin về tàu
    std::cout << "Ship ID: " << ship.id << std::endl;
    std::cout << "Position: (" << ship.rect.x << ", " << ship.rect.y << ")" << std::endl;
}

int main() {
    // Tạo một tàu mới
    Ship myShip;
    myShip.id = "ABC123";
    myShip.rect.x = 0;
    myShip.rect.y = 0;
    myShip.rect.width = 10;
    myShip.rect.height = 5;
    myShip.dx = 2;
    myShip.dy = 1;

    // Di chuyển tàu
    move(myShip);

    // Hiển thị thông tin tàu
    display(myShip);

    return 0;
}