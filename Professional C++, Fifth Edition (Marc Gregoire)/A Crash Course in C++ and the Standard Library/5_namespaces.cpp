#include <iostream>

namespace mycode {
    void foo()
    {
        std::cout << "foo() called in the mycode namespace" << std::endl;
    }
}

using namespace mycode;
 int main()
{
    foo(); // Implies mycode::foo()
}

/*
    Most code snippets in this book assume a 'using' directive
    for the std namespace so that everything from the C++ Standard
    Library is can be used without the need of the std:: prefix.
*/