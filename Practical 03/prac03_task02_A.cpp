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

}

string findAndReplace(string haystack, string needle, string replaceWith) {
	auto result {haystack};
	return result;
}
