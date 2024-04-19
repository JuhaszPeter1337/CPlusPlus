#include <iostream>
#include <cstring>

class String{
    char *p;
    size_t len;
  public:
    String(const char *s = ""){
        p = new char[len = strlen(s) + 1];
        strncpy(p, s, len);
        p[len] = '\0';
    }
    
    // masolo konstruktor
    String(const String &s){
        p = new char[len = s.len + 1];
        strncpy(p, s.p, len);
        p[len] = '\0';
    }
    
    ~String(){
        delete[] p;
    }
    
    char* getP() const { return p; }
    size_t getLen() const { return len; }
    
    // char c = my_s2[3];
    const char& operator[](int i) const{
        return p[i];
    }
    
    // my_s[0] = 'J';
    char& operator[](int i){
        return p[i];
    }
    
    String& operator=(const String &s){
        if (this != &s){
            delete[] p;
            p = new char[len = s.len + 1];
            strncpy(p, s.p, len);
            p[len] = '\0';
        }
        return *this;
    }
};

int main()
{
    String my_s("Peter");
    
    String my_s2("Juhasz");
    
    char c = my_s2[3]; // c = my_s2.operator[](3);

    std::cout << c << std::endl;
    
    my_s[0] = 'Q'; // my_s.operator[](0) = 'J';
    
    std::cout << my_s.getP() << " " << my_s2.getP() << std::endl;
    
    my_s2 = my_s;

    return 0;
}