#include <iostream>

/*
A static member function belongs to the class rather than any object instance, meaning it can be called without creating an instance of the class.
Static member functions can only access static member variables and other static member functions.
*/

class MyClass {
public:
    static int count; // Static member variable

    MyClass() {
        count++;
    }

    static void displayCount() { // Static member function
        std::cout << "Total objects created: " << count << std::endl;
    }
};

int MyClass::count = 0; // Definition and initialization of static member variable

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::displayCount(); // Calling static member function without an object

    return 0;
}
