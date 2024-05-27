#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

/*
1. Arithmetic Functors
Functors        Description
------------------------------------------------------------------------------------------
plus	        returns the sum of two parameters
minus	        returns the difference of two parameters
multiplies	    returns the product of two parameters
divides	        returns the result after dividing two parameters
modulus	        returns the remainder after dividing two parameters
negate	        returns the negated value of a parameter

2. Relational Functors
Functors        Description
------------------------------------------------------------------------------------------
equal_to	    returns true if the two parameters are equal
not_equal_to	returns true if the two parameters are not equal
greater	        returns true if the first parameter is greater than the second
greater_equal	returns true if the first parameter is greater than or equal to the second
less	        returns true if the first parameter is less than the second
less_equal	    returns true if the first parameter is less than or equal to the second

3. Logical Functors
Functors        Description
------------------------------------------------------------------------------------------
logical_and	    returns the result of Logical AND operation of two booleans
logical_or	    returns the result of Logical OR operation of two booleans
logical_not	    returns the result of Logical NOT operation of a boolean

4. Bitwise Functors
Functors        Description
------------------------------------------------------------------------------------------
bit_and	        returns the result of Bitwise AND operation of two parameters
bit_or	        returns the result of Bitwise OR operation of two parameters
bit_xor	        returns the result of Bitwise XOR operation of two parameters
*/

int main() {

  // initialize vector of int
  vector<int> nums = {1, 20, 3, 89, 2};

  // sort the vector in descending order
  sort(nums.begin(), nums.end(), greater<int>());

  for(auto num: nums) {
    cout << num << ", ";
  }

  return 0;
}