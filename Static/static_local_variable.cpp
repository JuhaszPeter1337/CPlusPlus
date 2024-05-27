#include <iostream>

/*
A static local variable retains its value between function calls.
It is initialized only once, and its lifetime extends until the end of the program.
*/

void counter() {
    static int count = 0; // Static local variable
    count++;
    std::cout << "Count: " << count << std::endl;
}

int main() {
    for (int i = 0; i < 3; i++)
        counter();
    return 0;
}
