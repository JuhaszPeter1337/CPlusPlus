#include <iostream>

/* 
A pure virtual function is implemented by classes that are derived from an Abstract class.
A class is abstract if it has at least one pure virtual function.
If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.
An abstract class can have constructors.
An abstract class in C++ can also be defined using struct keyword:
	struct A {
    virtual void Draw() = 0;
	}
*/

class A {
    int x;
  public:
    int getX(){ return x; }
    
    //Pure virtual function
    virtual void func() = 0;
};

class B : public A {
    int y;
  public:
    int getY(){ return y; }
    
    void func(){
        std::cout << "Class B: func()" << std::endl;
    }
};

int main()
{
    B b;
    
    b.func();
    
    A a;
	/*
    error: cannot declare variable ‘a’ to be of abstract type ‘A’
    note:   because the following virtual functions are pure within ‘A’:
    note:     ‘virtual void A::func()’
    */
    
    return 0;
}