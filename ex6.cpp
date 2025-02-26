#include <iostream>
using namespace std;

int y;
int *x;

int main() {

    cout << &y << endl; // this memory address does change if we keep repeating this
    y=10;
    x=&y; // setting pointer to point to the variable y
    cout << *x << "\n";
    cout << x << "\n"; // after running, we find that the value of the pointer remains same all throughout
    y=20;
    cout << *x << "\n";
    cout << x << "\n"; // after running, we find that the value of the pointer remains same all throughout

}