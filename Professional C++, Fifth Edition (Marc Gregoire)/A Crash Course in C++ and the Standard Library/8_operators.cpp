#include <iostream>

using namespace std;

main()
{
    // Arithmetic operators:
    int someInteger = { 256 };
    short someShort; // same as short int someShort;
    long someLong; // same as long int someLong;
    float someFloat; // same as float someFloat;
    double someDouble; // same as double someDouble;

    someInteger++; // same as someInteger = someInteger + 1;
    someInteger *= 2; // same as someInteger = someInteger * 2;
    someShort = static_cast<short>(someInteger); // same as someShort = (short)someInteger;
    someLong = someShort * 10000; // same as someLong = someShort * 10000L;
    someFloat = someLong + 0.785f; // same as someFloat = (float)someLong + 0.785f;
    someDouble = static_cast<double>(someFloat) / 100000; // same as someDouble = (double)someFloat / 100000.0;
    cout << someDouble << endl; // The output returns 51.4 (for me)



    // Order in which expressions are evaluated:
    int i { 34 + 8 * 2 + 21 / 7 % 2 };
    /* 
    This is how the computer sees the code above:
    int i { 34 + (8 * 2) + ((21 / 7) % 2) };
    */

    cout << i << endl; // The output returns 51

    return 0;
}