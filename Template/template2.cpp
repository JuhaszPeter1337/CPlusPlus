#include <iostream>
#include <cstring>

template <typename T>
T max(T a, T b){
    return a > b ? a : b;
}

template <typename T, typename C>
T max(T a, T b, C func){
  return func(a, b) ? b : a;
}

bool strcmpLess(const char *first, const char *second){
    return strcmp(first, second) < 0;
}

int main()
{
    const char *test1 = "apple", *test2 = "banana";
    
    std::cout << max<const char*>(test1, test2, strcmpLess) << std::endl;

    int a = 5, b = 8;
    std::cout << max<int>(a, b) << std::endl;
    
    double c = 3.14, d = 1.66;
    std::cout << ::max<double>(c, d) << std::endl;

    return 0;
}