#include <iostream>

void inc(int *number){
    (*number)++;
}

void inc2(int &number){
    number++;
}

int main()
{
    int a = 5;
    
    inc(&a);
    
    inc2(a);
    
    std::cout << a;

    return 0;
}