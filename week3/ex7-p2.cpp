#include <iostream>
#include <string>

struct Rect {
    float x, y, width, height;
};

struct Ship {
    Rect rect;
    std::string id;
    float dx, dy;
    
    void move() {
        // di chuyern theo vaanj toocs ddang cos 
        rect.x += dx;
        rect.y += dy;
    }
};

void display(const Ship& ship) {
    // hieernj thij thonog tin veef tafu 
    std::cout << "Ship ID: " << ship.id << std::endl;
    std::cout << "Position: (" << ship.rect.x << ", " << ship.rect.y << ")" << std::endl;
}

int main() {
    // taoj cacs tasfu 
    Ship ship1 = { {0, 0, 10, 5}, "ABC123", 2, 1 };
    Ship ship2 = { {10, 20, 8, 4}, "XYZ789", -1, 0.5 };
    
    int loop = 0;
    while (loop < 10) {
        // di chuyeern casc tafu
        ship1.move(); 
        ship2.move();
        
        // hieernj thij toaj ddooj cuar cacs tafu 
        display(ship1);
        display(ship2);
        
        loop++;
    }

    return 0;
}
