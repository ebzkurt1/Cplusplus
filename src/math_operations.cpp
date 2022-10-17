/* This program reads from the user a simple mathematical expression (operators allowed: +, -, /, *), and prints
 * it's value */
#include <iostream>

using namespace std;


int main(){
	double first, second;
	char op;

	cout << "Please enter an expression of the form\nargument op argument:\n";
	cin >> first >> op >> second;

	switch (op){
		case('+'):
			cout << first << op << second << " = " << first + second;
			break;
		case('-'):
			cout << first << op << second << " = " << first - second;
			break;
		case('*'):
			cout << first << op << second << " = " << first * second;
			break;
		case('/'):
			cout << first << op << second << " = " << first / second;
			break;
	}	
	return 0;
}
