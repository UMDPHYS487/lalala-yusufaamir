#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
      return 1;
    } else {
      return n * factorial(n - 1);
    }
  }

int main() {

  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;

  int result = factorial(n);
  if (result != -1) {
      std::cout << "Factorial of " << n << " is " << result << std::endl;
  }

}