A type cast is basically a conversion from one type to another. There are two types of type conversion:

Implicit Type Conversion Also known as ‘automatic type conversion’.
Done by the compiler on its own, without any external trigger from the user.
Generally takes place when in an expression more than one data type is present. In such condition type conversion (type promotion)
takes place to avoid lose of data.
All the data types of the variables are upgraded to the data type of the variable with largest data type.
bool -> char -> short int -> int -> 

unsigned int -> long -> unsigned -> 

long long -> float -> double -> long double
It is possible for implicit conversions to lose information, signs can be lost 
(when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).
---------------------
Explicit Type Conversion: This process is also called type casting and it is user-defined. Here the user can typecast the result 
to make it of a particular data type. In C++, it can be done by two ways
1)Converting by assignment: This is done by explicitly defining the required type in front of the expression in parenthesis.
This can be also considered as forceful casting.

// C++ program to demonstrate
// explicit type casting

#include <iostream>
using namespace std;

int main()
{
	double x = 1.2;

	// Explicit conversion from double to int
	int sum = (int)x + 1;

	cout << "Sum = " << sum;

	return 0;
}




2)Conversion using Cast operator: A Cast operator is an unary operator which forces one data type to be converted into another 
data type

