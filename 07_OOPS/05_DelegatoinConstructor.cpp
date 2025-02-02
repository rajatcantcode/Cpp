#include <iostream>

class Rectangle {
private:
    int width;
    int height;

public:
    // Constructor 1: initializes both width and height
    Rectangle(int w, int h) : width(w), height(h) {
        std::cout << "Constructor 1 called: " << width << " x " << height << std::endl;
    }

    // Constructor 2: initializes only width, delegates height to 5
    Rectangle(int w) : Rectangle(w, 5) {
        std::cout << "Constructor 2 called: " << width << " x " << height << std::endl;
    }

    // Constructor 3: default constructor, delegates both to default values
    Rectangle() : Rectangle(5, 5) {
        std::cout << "Constructor 3 called: " << width << " x " << height << std::endl;
    }
};

int main() {
    Rectangle rect1(10, 20);  // Calls Constructor 1
    Rectangle rect2(10);       // Calls Constructor 2
    Rectangle rect3;           // Calls Constructor 3

    return 0;
}

/*
class ClassName {
public:
    // First constructor
    ClassName(int x, int y) {
        // Some initialization code
    }

    // Delegating constructor
    ClassName(int x) : ClassName(x, 0) {  // Delegates to the first constructor
        // Additional initialization (if needed)
    }
};
*/