#include <iostream>

class A {
  public:
    virtual ~A() {};
};

class B : public A {
    char *p;
  public:
    B() { p = new char[10]; }
    ~B() { delete[] p; }
};

int main()
{
    A *pa = new B();
    delete pa;

    return 0;
}