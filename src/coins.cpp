/* A program that asks the user to enter an amount of money in the format of dollars and reamining cents. The program
 * should calculate and print the minimum number of coins that are equivalent to the given amount */
#include <iostream>

using namespace std;


int main(){
	int dollars, cents;
	double remaining;

	cout << "Please enter the amount of money to conver:\n";
	cout << "# of dollars:";
	cin >> dollars;

	cout << "\n# of cents:";
	cin >> cents;

	double money = dollars + (cents* 0.01);
	int quarters = (int)(money / 0.25);
	remaining = money - (quarters * 0.25);
	int dimes = (int)(remaining / 0.10);
	remaining = remaining - (dimes * 0.10);
	int nickels = (int)(remaining / 0.05);
	remaining = remaining - (nickels * 0.05);
	int pennies = remaining * 100;

	cout << "The coins are " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and ";
	cout << pennies << " pennies\n";

	return 0;
}
