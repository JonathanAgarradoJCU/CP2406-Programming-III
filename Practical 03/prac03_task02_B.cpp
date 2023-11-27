// CP2406 - Jonathan Roi Ferrer Agarrado (External) - 14275360

#include <iostream>

using namespace std;


// Question: Why the following line is here?
string findAndReplace(string haystack, string needle, string replaceWith);
	// My answer:
		/*
			The following line is here because the findAndReplace function is defined
			after the main function. The main function needs to know that the
			findAndReplace function exists before it can be used.
		*/

int main()
{

	string haystack {"aaabbbcojncuicb[u2b3]"};
	string needle {"["};
	string replaceWith {"???"};

	string result = findAndReplace(haystack, needle, replaceWith);
	cout << "haystack: " << haystack << endl;
	cout << "needle: " << needle << endl;
	cout << "replaceWith: " << replaceWith << endl;
	cout << "result: " << result << endl;

}

string findAndReplace(string haystack, string needle, string replaceWith) {
	// Make a copy of the haystack.
	string result{ haystack };

	// Find all needles and replace them with the replacement string.
	auto pos{ result.find(needle) };  // is it a good name for "position"?
		// My answer:
			/* 
				Since it is a short and descriptive name for the variable, I believe
				it is a good name for "position" I also think it's a good name because
				of it being a local variable and only used in the scope of the function.
			*/
	
	if (pos != string::npos) {
		result.replace(pos, needle.length(), replaceWith);
	}	
	return result;
}
