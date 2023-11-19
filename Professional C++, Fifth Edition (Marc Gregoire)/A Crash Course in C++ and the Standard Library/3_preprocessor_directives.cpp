/*

#include [file]

    Functionality:
        The specified file is inserted into the code at the location of the directive.
    Common Uses:
        Almost always used to include header files so that the code can make use of functionality defined elsewhere.

*/

/*

#define [id] [value]

    Functionality:
        Every occurrence of the specified identifier is replaced with the specified value.
    Common Uses:
        Often used in C to define constants, but in C++ it is more common to use const. and provides better mechanisms for
        defining constants and most types of macros. Macros can be dangerous because they are not type-safe, so they must
        be used carefully.

*/

/*

#ifdef [id]
#endif

#ifndef [id]
#endif

    Functionality: Code within the ifdef ("if defined") or ifndef ("if not defined") blocks are conditionally included or
        omitted based on whether the specified identifier has been defined with #define.
    Common Uses: Used most frequently to protect against circular includes. Each header file starts with an #ifndef
        checking the absence of an identifier, followed by a #define directive to define that identifier. The header file
        ends with an #endif. This prevents the header file from being included more than once in a single translation unit.

/*

#pragma [xyz]
    Functionality: xys is a compiler-dependent. Most compilers support a #pragma to display a warning or error message if
        the directive is reached during preprocessing.
    Common Uses:
        #pragma once
        // ...the contents of this header file

    (More in Chapter 11 of 'Professional C++' by Marc Gregoire.)

*/