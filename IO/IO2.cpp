#include <iostream>

struct Number{
    int a, b;
};

void read(Number t[]){
    std::cout << "Give me the numbers:" << std::endl;
    for (int i = 0; i < 3; i++)
        std::cin >> t[i].a >> t[i].b;
}

void print(Number t[]){
    for (int i = 0; i < 3; i++)
        std::cout << "a:" << t[i].a << " b:" << t[i].b << " sum:" << t[i].a + t[i].b << std::endl;
}

int main()
{
    Number arr[3];
    
    read(arr);
    
    print(arr);

    return 0;
}