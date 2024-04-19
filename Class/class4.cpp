#include <iostream>

class Komplex{
    double re, im;
  public:
    Komplex(double re, double im){
        this->re = re;
        this->im = im;
    }
    
    double getRe() const { return re; }
    double getIm() const { return im; }
    
    // Komplex k3 = k1 + k2;
    Komplex operator+(const Komplex &k) const{
        return Komplex(re + k.re, im + k.im);
    }
    
    // Komplex k3 = k2 + 3.14;
    Komplex operator+(const double n) const{
        return Komplex(re + n, im);
    }
};

// Komplex k3 = 3.14 + k2;
Komplex operator+(const double n, const Komplex& k) {
    return Komplex(n + k.getRe(), k.getIm());
}

std::ostream& operator<<(std::ostream &os, const Komplex &k){
    if (k.getIm() > 0){
        os << k.getRe() << "+" << k.getIm() << "i";
    }
    else if (k.getIm() < 0){
        os << k.getRe() << "-" << k.getIm() << "i";
    }
    else{
         os << k.getRe();
    }
    return os;
}

int main()
{
    const Komplex k1(1, 2);
    const Komplex k2(3, 4);
    
    Komplex k3 = 3.14 + k2;
    
    std::cout << k3 << std::endl;

    return 0;
}