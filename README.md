# BigInteger-For-Cpp
This repository contains implementation of Large unsigned integers which do not fit into native data types like long long. 

It contains basic implementation of number storing each digit at a index equal to its place value.
For Example : To store 123 , store 3 at index 0 , store 2 at index 1, store 1 at index 2.

Basic Methods described here: 
1. Constructors (Default , Copy Constructor , etc.)
2. Methods for recieving input/output from standard cin, cout stream.(operator overloading of '<<' & '>>')
3. Basic Comparison operators (<,>,<=,>=,==,!=) This enables us to use standard functions like sort(),max(),min(),etc.
4. Addition , Multiplication , Modulo with a number less than 2^64-1 , etc .
5. Some Additional methods like typecasting the number to long long if applicable , and to_string() function.

Additional things I will be adding after Some Time : 
1. Division of Numbers 
2. Support for Negative Numbers 
3. Exponentiation 

Scope for improvement : 
1. Memory can be improved by storing a chunk of digits at single place .
  For example : 123456789 can be stored as {'789' '456' '123'} , bigger grouping complicates the code but improve the memory required / range of number significantly.
2. Use of Karatsuba Algorithm to modify the time Complexity of Multiplication.
3. Memory can also be improved by storing digits as characters instead of array.

Feel free to contribute to this :)
