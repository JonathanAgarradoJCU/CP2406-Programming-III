#include <iostream>
#include <format.h> // new header for std::format (FIXME: For some reason it does not work?)

int main()
{
    std::cout << "There are " << 219 << " ways I love you." << std::endl; // old example
    std::cout << std::format("There are {} ways I love you.", 219) << std::endl; // new example

    return 0;
}