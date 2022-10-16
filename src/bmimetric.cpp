/* Body mass index (BMI) is a number calculated from a persons's weight and height. 
 * This program prompts for metric weight and height and outputs the BMI with two decimal points */
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main(){
	int weight;
	float height;
	cout << "Please enter weight in  kilograms:";
	cin >> weight;

	cout << "\nPlease enter height in meters:";
	cin >> height;

	float bmi = weight/pow(height,2);
	
	cout << setprecision(4);
	cout << "\nBMI is: " << bmi;

	return 0;
}
