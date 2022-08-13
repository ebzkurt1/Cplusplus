#include <iostream>  // Intstructing the compiler to include the declerations of the standard I/O facilities
using namespace std;  //make names from std visible without std::

double d1 = 2.3;
double d2 {2.3}; // Same as above statement

complex<double> z = 1;  // a complex number with double-precision floating point scalars
complex<double> z2 {d1, d2};
complex<double> z3 = {1, 2};  // the = is optional with {...}

vector<int> v {1, 2, 3, 4, 5, 6};  // a vector of ints

int i1 = 7.2 // i1 becomes 7
// int i2 {7.2}  // will result in error: floating-point to integer conversion
// int i3 = {7.2}  // again will result in the same error


double square(double x){  // square a double precision floating-point number
	return x*x;
}

void print_square(double x){
	cout << "The square of " << x << " is " << square(x) << "\n";
}

int main(){
	print_square(1.234); // Print square of 1.234
}


