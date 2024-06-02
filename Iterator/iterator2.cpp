#include <iostream>

template <class Iter>
void printFunction(Iter first, Iter last){
    while(first != last){
        std::cout << *first++ << std::endl;
    }
}

int main()
{
    int storage[5] = {0, 1, 2, 3, 4};
    printFunction<int*>(storage, storage+5);

    return 0;
}