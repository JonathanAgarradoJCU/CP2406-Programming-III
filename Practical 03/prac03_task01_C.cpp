// CP2406 - Jonathan Roi Ferrer Agarrado (External) - 14275360

#include <iostream>

// Question? You do not need to #include <string>. Why?
//My answer:
/*
	The getline(cin, userInput) function is part of the C++ standard library
	and does not require an explicit inclusion the '#include <string>' header
	file in order to use it.

	Though, I learned personally that it is still good standard to explicitly
	include the header file for the sake of self-documenting code and for
	avoiding errors.
*/

using namespace std;


int main()
{
	cout << "Please input string 1: "; 	
	string userInput;
	getline(cin, userInput);
	cout << "Your input: " << userInput << endl; 	

	cout << "Please input string 2: "; 	
	string userInput2;
	getline(cin, userInput2);
	cout << "Your input : " << userInput2 << endl; 	

	cout << "Sorted result:" << endl;
	if (userInput < userInput2) {
		cout << userInput << endl << userInput2 << endl;
	}
	else {
		cout << userInput2 << endl << userInput << endl;
	}
	cout << "DONE!" << endl;

}
