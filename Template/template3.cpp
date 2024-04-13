#include <iostream>
using namespace std;

template <typename A, typename B>
void printout(A a, B b){
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}

int main()
{
    int a = 5;
    const char *first = "Peter";
    
    printout<int, const char *>(a, first);

    return 0;
}