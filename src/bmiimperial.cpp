/* Body  mass  index (BMI) is  a number  calculated  from  a person’s weight and height.
 * This program takes height and weight inputs as inches and pounds from the user, converts them to metric and 
 * prompts the BMI */
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main(){
	int weight, height;
	cout << "Please enter weight in pounds: ";
	cin >> weight;

	cout << "\nPlease enter height in inches: ";
	cin >> height;

	cout << setprecision(4);
	cout << "\nBMI is: " << (weight * 0.4535924)/pow((height * 0.0254),2);

	return 0;
}	
