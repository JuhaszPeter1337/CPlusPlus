#include <iostream>

int main() {
    
    int numbers[] = {0, 1, 2, 3, 4};
    
    for (auto num: numbers)
        std::cout << num << std::endl;
    
    return 0;
}