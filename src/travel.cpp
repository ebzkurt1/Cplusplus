#include <iostream>
using namespace std;


const int DAYS_IN_WEEK = 7;
int main(){
	int days;

	cout << "Please enter number of days you traveled:" << endl;
	cin >> days;
	cout << days << " days are " << days/DAYS_IN_WEEK << " weeks and " << days%DAYS_IN_WEEK << " days";

	return 0;
}
