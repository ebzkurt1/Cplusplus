/* This program reads from the user a time entered in a 24-hour format, and prints the equivalent time in a 12-hour
 * format */
#include <iostream>
#include <string>

using namespace std;


int main(){
	int hour,min;
	char sep;
	cout << "Please enter a time:\n";
	cin >> hour >> sep >> min;

	if(hour<13)
		cout << hour << sep << min << " is " << hour << sep << min << " am\n";
	else
		cout << hour << sep << min << " is " << hour%12 << sep << min << " pm\n";

	return 0;
}
