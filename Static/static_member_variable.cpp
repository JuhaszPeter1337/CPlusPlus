#include <iostream>

/*
A static member variable is shared among all instances of a class.
There is only one copy of the variable, regardless of how many objects are created.
*/

class MyClass {
public:
    static int count; // Static member variable
    MyClass() {
        count++;
    }
};

int MyClass::count = 0; // Definition and initialization of static member variable

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    std::cout << "Total objects created: " << MyClass::count << std::endl;
    return 0;
}
