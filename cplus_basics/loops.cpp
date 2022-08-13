#include <iostream>

using namespace std;


bool accept(){  // function that prompts the user and returns a Boolean indicating response
	cout << "Do you want to proceed (y or n)?\n";  //write question
	
	char answer = 0;
	// cin is the standard input stream
	cin >> answer;  // read answer

	if (answer == 'y') return true;
	return false;
}


bool accept2(){  // Improved version that takes no as well.
	cout << "Do you want to proceed (y or n)?\n";

	char answer = 0;
	cin >> answer;
	switch(answer){
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			cout << "I'll take that for a no.\n";
			return false;
	}
}


bool accept3(){  // Giving user couple of options to enter y or n.
	int tries = 1;
	while(tries<4){
		cout << "Do you want to proceed (y or n)?\n";
		char answer = 0;
		cin >> answer;
		switch(answer){
			case 'y':
				return true;
			case 'n':
				return false;
			default:
				cout << "Sorry, I don't understand that.\n";
				++tries;
		}
	}
	cout << "I'll take that for a no.\n";
	return false;
}


int main(){
	accept3();
	return 0;
}
