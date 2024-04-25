#include <iostream>

class A {
  public:
    void first() { std::cout << "A Class: first()" << std::endl; }
    virtual void second() { std::cout << "A Class: second()" << std::endl; }
    virtual void third() { std::cout << "A Class: third()" << std::endl; }
    virtual void fourth() { std::cout << "A Class: fourth()" << std::endl; }
};

class B : public A {
  public:
    void first() { std::cout << "B Class: first()" << std::endl; }
    void second() { std::cout << "B Class: second()" << std::endl; }
    void third() { std::cout << "B Class: third()" << std::endl; }
    void fourth(int B) { std::cout << "A Class: fourth() " << B << std::endl; }
};

int main()
{
    std::cout << "A obj:" << std::endl;
    A obj;
    obj.first();
    obj.second();
    obj.third();
    obj.fourth();
    
    std::cout << std::endl << "B obj2:" << std::endl;
    B obj2;
    obj2.first();
    obj2.second();
    obj2.third();
    obj2.fourth(5);
    
    std::cout << std::endl << "B obj4, A *obj3 = &obj4:" << std::endl;
    B obj4;
    A *obj3 = &obj4;
    
    obj3->first();
    obj3->second();
    obj3->third();
    obj3->fourth();

    return 0;
}