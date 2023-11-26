#include <iostream>

using namespace std;

main()
{
    char s[6];
    char s[6] = {'H', 'e', 'l', 'l', 'o'};
    char s[6] = "Hello";
    char s[];
    char s[] = new char[6];
    char s[] = {'H', 'e', 'l', 'l', 'o'};
    char s[] = "Hello";
    char s[] = new("Hello");
    char* s;
    char* s = new char[6];
    char* s = {'H', 'e', 'l', 'l', 'o'};
    char* s = "Hello";
    char* s = new("Hello");
 
    return 0;
}