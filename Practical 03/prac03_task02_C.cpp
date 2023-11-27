// CP2406 - Jonathan Roi Ferrer Agarrado (External) - 14275360

#include <iostream>

using namespace std;

// Question? why "const string& " and not juct "string "?
	// My answer:
		/*
			Using "const string& " instead of "string " is more efficient because
			"const string& " is a reference to a string object, and not a copy of
			the string object itself. It is more efficient as it saves memory and
			time. It does not have to create a copy of the string object.
		*/

string findAndReplace(const string& haystack, const string& needle, const string& replaceWith) 
	//Explanation:
		/*
			The findAndReplace function takes in three string objects as parameters.
			First parameter  = string to be searched.
			Second parameter = the string to be found.
			Third parameter  = the string to replace the found string with.

			The function returns a string object. The function first makes a copy of
			the haystack string object. Then, it searches for the needle string object
			in the haystack string object. If the needle string object is found, it
			replaces the needle string object with the replaceWith string object. The
			function then returns the haystack string object.
		*/

{
	// Make a copy of the haystack.
	string result{ haystack };

	// auto pos{ result.find(needle) };  // is it a good name for "position"?
		// My answer:
			/* 
				Since it is a short and descriptive name for the variable, I believe
				it is a good name for "position" I also think it's a good name because
				of it being a local variable and only used in the scope of the function.
			*/
	

	// if (pos != string::npos) {
	// 	result.replace(pos, needle.length(), replaceWith);
	// }	
	
	// Find all needles and replace them with the replacement string.
	auto position{ result.find(needle) };
	while (position != string::npos) {
		result.replace(position, needle.length(), replaceWith);
		position = result.find(needle, position + needle.size());
	}

	return result;
}


int main()
{

	// string haystack {"aaabbbcojncuicb[u2b3]"};
	// string needle {"["};
	// string replaceWith {"???"};

	string haystack;
	cout << "Enter source string: ";
	getline(cin, haystack);

	// Ask for the string to find (= needle).
	string needle;
	cout << "Enter string to find: ";
	getline(cin, needle);

	// Ask for the replacement string.
	string replacement;
	cout << "Enter replacement string: ";
	getline(cin, replacement);

	// QUESTION: why not "result = findAndReplace"?
		// My answer:
			/*
				"result = findAndReplace" is not valid. The findAndReplace function
				returns a string object, not a string reference. The "result" variable
				is a string reference, and not a string object.
			*/

	string result {findAndReplace(haystack, needle, replacement)};
	cout << "haystack: " << haystack << endl;
	cout << "needle: " << needle << endl;
	cout << "replacement: " << replacement << endl;
	cout << "result: " << result << endl;

	return 0;
}
