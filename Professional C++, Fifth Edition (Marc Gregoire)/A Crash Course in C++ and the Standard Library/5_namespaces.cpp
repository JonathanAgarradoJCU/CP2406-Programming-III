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

    WARNING:
        Never put a 'using' directive in a header file at global
        scope. This will pollute the global namespace of any file that 
        includes the header file. Putting it on a smaller scope, for instance
        at 'namespace' or 'class scope', is acceptable, even in a header.
        It's also perfectly fine to put a 'using' directive or declaration
        in a module interface file, as long as you don't export it. However,
        this book always fully qualifies all types in module interface files,
        as I think it makes it easier to understand an interface.
*/