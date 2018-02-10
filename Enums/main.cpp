#include <iostream>

enum class Color {
    RED, GREEN, BLUE
};

void FillColor(Color color) {
    if (color == Color::RED) {
        std::cout << "RED" << std::endl;
    } else if (color == Color::GREEN) {
        std::cout << "GREEN" << std::endl;
    } else if (color == Color::BLUE) {
        std::cout << "BLUE" << std::endl;
    }
}

enum class TrafficLight : char {
    RED = 'c', GREEN, BLUE
};

int main() {
    Color c = Color::RED;
    FillColor(c);
    FillColor(Color::GREEN);
    FillColor(static_cast<Color>(2));
    int x = static_cast<int>(Color::RED);
    return 0;
}