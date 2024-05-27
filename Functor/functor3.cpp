#include<iostream>

class Sum{
    int _sum;
  public:
    Sum(int sum){
        _sum = sum;
    }
    
    void operator()(int number){
        _sum += number;
    }
    
    int getSum(){
        return _sum;
    }
    
    void display(){
        std::cout << getSum() << std::endl;
    }
};

int main() {

  Sum sum(0);
  sum(50);
  sum.display();
  sum(100);
  sum.display();

  return 0;
}