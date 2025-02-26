#include <iostream>
#include <bitset>

int main() {
    std::bitset<8> b{0b01110010};
    std::cout << b << " (initial value)\n";

    // Flip all bits using bitwise NOT
    b = ~b;

    std::cout << b << " (after flipping bits)\n";

    return 0;
}
