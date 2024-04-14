#include <iostream>

class Number{
    int a, b;
  public:
    Number(int a, int b) { this->a = a; this->b = b; }
    void public_func(){
        private_func();
    }
  private:
    void private_func(){
        std::cout << this->a << " " << this->b << std::endl;
    }
};

int main()
{
    Number number(5,8);
    
    number.public_func();

    return 0;
}