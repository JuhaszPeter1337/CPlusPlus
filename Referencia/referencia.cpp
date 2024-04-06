#include <iostream>

void csere_pointerrel(int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void csere_referenciaval(int &ra, int &rb){
    int temp = ra;
    ra = rb;
    rb = temp;
}

int main()
{
    int a = 2, b = 5;
    int c = 3, d = 7;

    csere_pointerrel(&a, &b);
    csere_referenciaval(c, d);
    
    std::cout << "a:" << a << " " << "b:" << b << " " << "c:" << c << " " << "d:" << d << std::endl;

    return 0;
}