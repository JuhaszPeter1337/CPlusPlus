#include <iostream>

class Number {
    int a, b = 0;
  public:
    Number(int a) {
        this->a = a;
    }
    
    Number(int a, int b){
        this->a = a;
        this->b = b;
    }
    
    int getA(){
        return this->a;
    }
    
    int getB(){
        return this->b;
    }
    
    void set(int a, int b){
        this->a = a;
        this->b = b;
    }
    
    int sum();
    
    ~Number(){
        std::cout << "Nothing to set free!" << std::endl;
    }
};

int Number::sum(){
    return this->a + this->b;
}

int main()
{
    Number first(2);
    std::cout << first.getA() << ", " << first.getB() << std::endl;
    
    Number second(5,8);
    std::cout << second.getA() << ", " << second.getB() << std::endl;
    
    second.set(14, 18);
    std::cout << second.getA() << ", " << second.getB() << std::endl;
    
    std::cout << "Sum: " << second.sum() << std::endl;

    return 0;
}