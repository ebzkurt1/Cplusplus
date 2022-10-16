#include <iostream>

using namespace std;


const int ASCII_UPPER_DIFF = 32;
int main(){
	char lower;

	cout << "Please enter a lower case letter:\n";
	cin >> lower;

	cout << "The upper case of " << lower << " is " << (char)(lower - ASCII_UPPER_DIFF) << endl;

	return 0;
}
