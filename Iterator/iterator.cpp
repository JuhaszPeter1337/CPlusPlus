#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    
    vector<int> my_vector = {0, 1, 2, 3, 4, 5};
    
    vector<int>::iterator ptr;
    
    for (ptr = my_vector.begin(); ptr < my_vector.end(); ptr++)
        cout << *ptr << std::endl;

    return 0;
}