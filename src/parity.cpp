/* This program reads from the user a positive integer, and determines it's parity (even or odd) */
#include <iostream>

using namespace std;


int main(){
	int inp;
	cout << "Please enter an integer:\n";
	cin >> inp;

	if(inp%2 == 0){
		cout << inp << " is even\n";
	}
	else{
		cout << inp << " is odd\n";
	}

	return 0;
}
