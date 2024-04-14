#include <iostream>

class Number {
    int a, b;
  public:
    void set(int a, int b){
        this->a = a;
        this->b = b;
    }
    
    int sum(){
        return this->a + this->b;
    }
};

int main()
{
    Number number;
    
    number.set(5, 8);
    
    std::cout << number.sum() << std::endl;

    return 0;
}