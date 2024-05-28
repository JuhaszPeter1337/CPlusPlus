#include <iostream>

template <typename T, size_t s>
class Array{
    T *arr;
  public:    
    Array(){
        arr = new T[s];
    }

    T* getArr(){
        return arr;
    }
  
    T& operator[](size_t i){
        return arr[i];
    }
    
    ~Array(){
        delete[] arr;
    }
};

template <typename T, size_t s>
class MyArray : public Array<T, s>{
  public:
    MyArray(){
        for (int i = 0; i < s; i++)
            Array<T, s>::getArr()[i] = i;
    }
  
    T& at(size_t i){
        if (i >= s)
            throw std::out_of_range("MyArray");
        return Array<T, s>::operator[](i);
    }
};

int main()
{
    MyArray<int, 5> i5;
    
    std::cout << i5.at(2) << std::endl;

    return 0;
}