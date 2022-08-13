#include <iostream>

using namespace std;


void copy_fct(){
	int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int v2[10];  // to become a copy of v1

	for (auto i=0; i!=10; i++)
		v2[i] = v1[i];

	// using range-for-statement
	for (auto x: v2)  // for each x in v2
		cout << x << '\n';
	
	// if we don't want to copy values from v into variable x, but rather have x refer to an element
	for (auto& x: v)
		++x;
}


int count_x(char* p, char x)
	// count the number of occurances of x in p[]
	// p is assumed to point to a zero-terminated array of char (or to nothing)
{
	if (p==nullptr) return 0;
	int count = 0;
	for(;*p!=0;++p)
		// We can move a pointer to the next element of an array using ++
		if(*p==x)
			++count;
	return count;
}


int main(){
	char v[6];  //array of 6 characters
	char* p;  // pointer to character
		  // A pointer variable can hold the address of an object of the appropriate type
	char* p = &v[3];  // p points to v's fourth element
	char x = *p; // *p is the object that p points to
		     // prefix unary * means "contents of"
		     // prefix unary & means "address of"
}
