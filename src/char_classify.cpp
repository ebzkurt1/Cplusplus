/* This program reads from the user a character and classifies it to one of the following: lower case letter, upper
 * case letter, digit, not alpha-numeric character */
#include <iostream>

using namespace std;


int main(){
	char chr;

	cout << "Please enter a character:\n";
	cin >> chr;

	if(chr >= 'a' && chr <= 'z')
		cout << chr << " is a lower case letter\n";
	else if(chr >= 'A' && chr <= 'Z')
		cout << chr << " is an upper case letter\n";
	else if(chr >= '0' && chr <= '9')
		cout << chr << " is a digit\n";
	else
		cout << chr << " is an alpha-numeric character\n";

	return 0;
}
