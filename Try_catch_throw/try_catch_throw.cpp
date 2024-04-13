#include <iostream>
using namespace std;

double divide(double n, int b){
    if (b == 0)
        throw "You cant divide with 0!";
    else
        return n/b;
}

int main()
{
    try {
        cout << divide(5, 2) << endl;
        cout << divide(5, 4) << endl;
        cout << divide(5, 0) << endl;
    } catch (const char *err){
        cout << err;
    }
    
    return 0;
}