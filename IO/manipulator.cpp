#include <iostream>
#include <iomanip>
using namespace std;

/*
Manipulatorok:
https://infocpp.iit.bme.hu/iomanip
*/

int main()
{
    cout << "Hexa converter:" << endl;
    
    int x;
    
    while(cin >> x){
        cout << uppercase << hex << x << endl;
    }

    return 0;
}