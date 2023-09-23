#include <iostream>

int main() {
    int x = 5;

    if (true) {
        int x = 10; // Shadowing the outer 'x'
        std::cout << "Inner x: " << x << std::endl;
    }

    std::cout << "Outer x: " << x << std::endl; // Accessing the outer 'x'

    return 0;
}
