#include <iostream>

int main() {
    for (int i = 0; i < 10; ++i) {
        int f = 1; // Initialize factorial
        for (int j = 1; j <= i + 1; ++j) {
            f *= j; // Compute factorial
        }
        std::cout << "Factorial of " << i + 1 << " is " << f << std::endl;
    }
}
