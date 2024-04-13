#include <iostream>

struct Lanc_elem {
    int adat;
    Lanc_elem *kov;
};

Lanc_elem *lanc_epit(Lanc_elem *lista, int elem){
    // C-ben malloc(sizeof(Lanc_elem))
    Lanc_elem *uj = new Lanc_elem;
    uj->adat = elem;
    uj->kov = lista;
    return uj;
} 

void lanc_kiir(std::ostream &os, const Lanc_elem *p){
    while(p != NULL){
        os << p->adat << " ";
        p = p->kov;
    }
}

void lanc_felszabadit(Lanc_elem *p){
    while(p != NULL){
        Lanc_elem *tmp = p->kov;
        // C-ben free(p)
        delete p;
        p = tmp;
    }
}

int main()
{
    Lanc_elem *uj_lista = NULL;
    
    uj_lista = lanc_epit(uj_lista, 5);
    uj_lista = lanc_epit(uj_lista, 8);
    uj_lista = lanc_epit(uj_lista, 3);
    
    lanc_kiir(std::cout, uj_lista);
    
    lanc_felszabadit(uj_lista);
    
    return 0;
}