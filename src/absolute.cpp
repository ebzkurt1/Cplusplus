/* This program reads from the user an integer, and prints it's absolute value */
#include <iostream>
#include <math.h>

using namespace std;


int main(){
	int inp;
	cout << "Please enter an interger:\n";
	cin >> inp;

	cout << "|" << inp << "| = " << abs(inp) << endl;

	return 0;
}
