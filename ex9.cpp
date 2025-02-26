#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int* jjj;
    for(int k=0; k<100000000; k++) {
        jjj = new int(k);
        int lll = k%100000;
        if (lll < 1) {
            std::cout << "k is " << k << " " << lll << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }
    std::cout << "big pause before exiting" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100000));
}
