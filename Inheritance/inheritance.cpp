#include <iostream>

class A {
    int a, b;
  public:
    // Member initializer list constructor
    A(int _a, int _b): a(_a), b(_b) {}
    int getA() { return a; }
    int getB() { return b; }
    virtual void print() { std::cout << "Class A" << std::endl; }
};

class B : public A {
    int c, d;
  public:
    // Member initializer list constructors
    B(int _a, int _b, int _c, int _d): A(_a, _b), c(_c), d(_d) {}
    int getC() { return c; }
    int getD() { return d; }
    void print() { std::cout << "Class B" << std::endl; }
};

int main()
{
    A obj(5, 10);
    
    B obj2(2, 4, 6, 8);
    
    std::cout<< obj.getA() << " " << obj.getB() << std::endl;
    
    std::cout<< obj2.getA() << " " << obj2.getB() << " " << obj2.getC() << " " << obj2.getD() << std::endl;
    
    obj.print();
    obj2.print();
    
    A *obj3 = new B(2, 4, 6, 8);
    obj3->print();

    return 0;
}