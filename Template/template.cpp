#include <iostream>
using namespace std;

template <typename Type>
Type max(Type a, Type b){
    return a > b ? a : b;
}

int main()
{
    int a = 5, b = 8;
    double c = 3.14, d = 1.66;
    
    /* 
    By using namespace std, I bring std::max into the global scope. Therefore the compiler doesn't know which max to call - ::max or std::max.
    That's why I need ::max
    */
    cout << ::max<int>(a, b) << endl;
    cout << ::max<double>(c, d) << endl;

    return 0;
}