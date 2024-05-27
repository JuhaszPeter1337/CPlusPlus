#include <iostream>
using namespace std;

/*
Overloading the function call operator ().
This allows us to call the class object as if it were a function as shown below.
*/

class Greet {

  public:    
    // overload function call/parentheses operator
    void operator()() {
      cout << "Hello World!";
    }
};

int main() {

  // create an object of Greet class
  Greet greet;

  // call the object as a function
  greet();

  return 0;
}