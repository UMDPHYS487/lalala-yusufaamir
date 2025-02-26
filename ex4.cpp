#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
      return 1;
    } else {
      return n * factorial(n - 1);
    }
  }

int main() {
    for (int i = 0; i < 10; ++i) {

        std::cout << "Factorial of " << i+1 << " is " << factorial(i+1) << std::endl;

      }
}