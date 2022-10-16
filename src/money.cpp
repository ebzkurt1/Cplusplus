/* A program that asks the user to enter a number of quarters, dimes, nickels, and pennies and then outputs the
 * monetary value of the coins in the format of dollars and remaining cents */

#include <iostream>

using namespace std;


int main(){
	int quarters, dimes, nickels, pennies;
	cout << "Please enter the number of coins:\n";
	
	cout << "# of quarters:";
	cin >> quarters;
	quarters = quarters * 25;

	cout << "\n# of dimes:";
	cin >> dimes;
	dimes = dimes * 10;

	cout << "\n# of nickels:";
	cin >> nickels;
	nickels = nickels * 5;

	cout << "\n# of pennies:";
	cin >> pennies;

	int total = quarters + dimes + nickels + pennies;

	cout << "\nThe total is " << (int)(total/100) << " dollars and " << (int)(total%100) << " cents\n";

	return 0;
}
