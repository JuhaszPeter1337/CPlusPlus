#include <iostream>
using namespace std;

/*
Predikátum: Logikai függvény, ami egy algoritmus működését befolyásolja.
Pl.: válasszuk ki egy tömbből a leg... elemet!
Melyik a leg? A predikátum függvény adja meg. 
*/

template <typename T>
bool max(T a, T b){
    return a > b ? true : false;
}

template <typename T>
bool min(T a, T b){
    return a < b ? true : false;
}

template <typename T, typename F>
T find(T arr[], int n, F predikatum){
    T temp = arr[0];
    for (int i = 1; i < n; i++){
        if (predikatum(arr[i], temp))
            temp = arr[i];
    }
    return temp;
}

int main()
{
    int my_arr[] = {5, 3, 8, 12, 7};
    
    cout << ::find<int>(my_arr, 5, ::max<int>) << endl;
    
    cout << ::find<int>(my_arr, 5, ::min<int>) << endl;

    return 0;
}