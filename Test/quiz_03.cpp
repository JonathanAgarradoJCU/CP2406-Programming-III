#include <iostream>

using namespace std;

int* getData(int value)
{
   return new int[value * 2];
}
int main()
{
   int* data{ getData(21) };
   cout << data << endl;
   data = getData(42);
   cout << data << endl;
}
