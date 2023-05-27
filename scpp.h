/*
WELCOME TO THE SRC CODE OF SIMPLE C++
Make everyone LOVE C++ 

so basically if you are beginner to C++ or C use this library.
This Header File Contain GNU Open Source License
Read the license here - https://www.gnu.org/licenses/gpl-3.0.en.html

And Oh yeah I almost forgot

include 
--BEGIN CODE--
#include "scpp.h"
--CLOSE CODE--

DO NOT CREATE A SEPRATE DIRECTORY FOR THAT!!!
Yeah I know some users like to create that but it is up to you :)

And Please When you are Coding please include the 

--BEGIN CODE--
#include <iostream>
--CLOSE CODE--

at the header file in case something goes wrong :)

*/
#ifndef MAIN_CODE
#ifndef LIB_INCLUDE
    #include <iostream>
    #include <stdio.h>
    using namespace std; // So instead of std::cout write cout
#endif 

// I aint knowing how to setup c++ in C file so I copied it from raylib (Please don't sue me raylib )
// Allows you to program in C++ in c file 
// NOTE: MSVC C++ compiler does not support compound literals (C99 feature)
// Plain structures in C++ (without constructors) can be initialized with { }
#ifndef COMPILER_SETUP_CPP
    #if defined(__cplusplus)
        #define CLITERAL(type)      type
    #else
        #define CLITERAL(type)      (type)
    #endif 
#endif 

// the begin of this
#ifndef FUNCTION_REPLACEMENT_SCPP // Function Replacement
    #define print printf // use print instead of printf 
    #define ret return // works for me though :) use return function
    #define argch int argc // I ain't sure
    #define str string
#endif 

#ifndef DEFAULT_VARIABLE_REPLACEMENT
    #define true 1
    #define false 0
    #define EXT_OK 0
    #define EXIT_NS 1 // Exit Non secure / error
    #define EXT_ERR 1 // another name for this 
#endif

#ifndef OPTIONAL_FUNCTION_REPLACEMENT
    #define leave abort
    #define elif else if
    #define CLR color
#endif


#ifndef SCPP_FUNCTION_SELF
    void version_scpp() {
        printf("\n Simple C++");
        printf("You are currently using v 0.1 \n");
        printf("Will be outdated on :- 23/04/2023 \n");
        printf("Simple C++ Updates are available to Github\n");
        printf("_________________________________________\n");
        printf("Note that this software is using GPL or\n");
        printf("GNU Public License. Read it on \n ");
        printf("https://www.gnu.org/licenses/gpl-3.0.en.html\n");
        printf("Good luck ;)\n");
    }
#endif  
#endif //SCPP_H