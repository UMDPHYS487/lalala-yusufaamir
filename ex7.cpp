#include <iostream>
using namespace std;

int main() {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    switch(n%2){
        case 0:
        std::cout << n*n << std::endl;
        break;
        case 1:
        std::cout << n/2 << std::endl;
        break;
        default:
        std::cout << "hahaha" << std::endl;
    }

}