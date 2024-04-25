#include <iostream>

/*
Public members are accessible for all and everyone.
Private members are only accessible within the class defining them.
Protected members are accessible in the class that defines them and in classes that inherit from that class.
*/

class A {
  public:
    int x, y;
    A(int _x, int _y){
        x = _x;
        y = _y;
    }
};

class B {
    int i, j;
  public:
    B(int _i, int _j){
        i = _i;
        j = _j;
    }
    
    int getI(){ return i; }
    int getJ(){ return j; }
};

class C {
  protected:
    int k, l;
  public:
    C(int _k, int _l){
        k = _k;
        l = _l;
    }
    int getK(){ return k; }
    int getL(){ return l; }
};

class D : public C {
    int o, p;
  public:
    D(int _k, int _l, int _o, int _p) : C(_k, _l), o(_o), p(_p) {}
    void print(){
        std::cout << k << " " << l << " " << o << " " << p << std::endl;
    }
};

class E : public B {
    int q, r;
  public:
    E(int _i, int _j, int _q, int _r) : B(_i, _j), q(_q), r(_r) {}
    void print(){
        std::cout << getI() << " " << getJ() << " " << q << " " << r << std::endl;
    }
};

int main()
{
    A a(5,7);
    
    std::cout << a.x << " " << a.y << std::endl;
    
    B b(2, 3);
    
    std::cout << b.getI() << " " << b.getJ() << std::endl;
    
    C c(9, 11);
    
    std::cout << c.getK() << " " << c.getL() << std::endl;
    
    D d(13, 15, 17, 19);
    d.print();
    
    E e(20, 21, 22, 23);
    e.print();
    
    return 0;
}
