#include <iostream>

inline int max(int a, int b) { return a > b ? a : b; }

int main()
{
    cout << "Kerek ket egesz szamot:" << endl;
    int i, j;
    cin >> i >> j; // i és j értékének beolvasása
    int k = max(i, j);
    cout << "A nagyobb: " << k << endl; // nagyobb kiírása
    
    return 0;
}