#include <iostream>
#include <math.h>
using std::cout;
using std::endl;

class Komplex{
    double re = 0, im = 0;
  public:
    Komplex() {};
    Komplex(double re) { this->re = re; }
    Komplex(double re, double im) { this->re=re; this->im = im;}
    double getRe() const { return this->re; }
    double getIm() const { return this->im; }
    void setRe(double re) { this->re = re; }
    void setIm(double im) { this->im = im; }
    
    double abs() const{
        return sqrt(this->re * this->re + this->im * this->im);
    }
    
    bool operator==(const Komplex &k) const{
        return this->re == k.re && this->im == k.im;
    }
    
    Komplex operator+(const Komplex &k) const{
        return Komplex(this->re + k.re, this->im + k.im);
    }
    
    Komplex operator+(const double number){
        return *this + Komplex(number, 0);
    }
    
    Komplex& operator+=(const Komplex &k){
        return *this = *this + k;
    }
    
    Komplex& operator+=(const double number){
        return *this = *this + number;
    }
    
    Komplex operator~() const{
        return Komplex(this->re, this->im * -1);
    }
    
    Komplex operator*(const Komplex &k) const{
        return Komplex(this->re * k.re - this->im * k.im, this->re * k.im + this->im * k.re);
    }
    
    Komplex operator*(const double number) const{
        return *this * Komplex(number);
    }
    
    Komplex operator*=(const Komplex &k){
        return *this = *this * k;
    }
    
    Komplex operator*=(const double number){
        return *this = *this * Komplex(number);
    }
};

Komplex operator+(const double number, const Komplex &k){
        return k + number;
}

std::ostream& operator<<(std::ostream &os, const Komplex &k){
        if (k.getIm() > 0)
            os << k.getRe() << "+" << k.getIm() << "i" << endl;
        else if (k.getIm() < 0)
            os << k.getRe() << k.getIm() << "i" << endl;
        else
            os << k.getRe() << endl;
        return os;
}

std::istream& operator>>(std::istream &is, Komplex &k){
    double re, im;
    is >> re >> im;
    k = Komplex(re, im);
    is.ignore(1);
    return is;
}

int main()
{
    Komplex k1(5,12);
    
    k1.setRe(7);
    k1.setIm(9);
    
    cout << "Re:" << k1.getRe() << " Im:" << k1.getIm() << " Abs:" << k1.abs() << endl;
    
    Komplex k2(7,9);
    
    cout << "Re:" << k1.getRe() << " Im:" << k1.getIm() << endl;
    
    if (k1 == k2)
        cout << "The two numbers equal!" << endl;
    else
        cout << "The two numbers don't equal!" << endl;
        
    Komplex k3 = k1 + k2;
    
    cout << "Re:" << k3.getRe() << " Im:" << k3.getIm() << endl;
    
    const double val = 2;
    
    k3 = k3 + val;
    
    cout << "Re:" << k3.getRe() << " Im:" << k3.getIm() << endl;
    
    k3 += k3;
    
    cout << "Re:" << k3.getRe() << " Im:" << k3.getIm() << endl;
    
    k3 += 14;
    
    cout << "Re:" << k3.getRe() << " Im:" << k3.getIm() << endl;
    
    cout << k3;
    
    Komplex k5;
    
    std::cin >> k5;
    
    std::cout << k5;
    
    cout << "Konjugalt: " << ~k5;
    
    Komplex k6(5, 3);
    
    cout << k6;
    cout << k6 * k1;
    cout << k6 * 3;
    
    k6 *= 5;
    
    cout << k6;

    return 0;
}