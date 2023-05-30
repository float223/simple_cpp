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

THis a major Beta and is for testing purposes. SDL is with Me but soon Maybe Raylib will be eith me

This code contains major compiler changes and will be removed if the SDL's creator will be against with me.

DO NOT CREATE A SEPRATE DIRECTORY FOR THAT!!!
Yeah I know some users like to create that but it is up to you :)

And Please When you are Coding please include the 

\begin 
#include <iostream>
\end 

at the header file in case something goes wrong :)

*/
#ifndef MAIN_CODE
#ifndef LIB_INCLUDE
    #include <iostream>
    #include <stdio.h>
    #include <random>
    using namespace std; // So instead of std::cout write cout
#endif 

#ifndef DEFAULT_SCPP_VARS
    #define NUMBER_RAND int(rand)
    #define SECURE_CODE 
#endif 

#ifndef CPP_POINTERS
    #define p_argc int argc
    #define p_argv char **argv
    #define default_pointer int argc, char **argv
#endif

// I aint knowing how to setup c++ in C file so I copied it from raylib (Please don't sue me raylib )
// Allows you to program in C++ in c file 
//  \brief NOTE: MSVC C++ compiler does not support compound literals (C99 feature)
// Plain structures in C++ (without constructors) can be initialized with { }
#ifndef COMPILER_SETUP_CPP
    #if defined(__cplusplus)
        #define CLITERAL(type)      type
    #else
        #define CLITERAL(type)      (type)
    #endif 
#endif 

// this code is used from SDL's Libraries. from begin_code.h. But OH WELL, I HAVE TO FOLLOW TWO LICENSE!!!! I think one is the Apache one... maybe?? Sorry SDL
// my "3" key is broken from these Preprocessing one
// Always unhighlighted preprocessing keywords And oh god.
// WHAT THE HELL SDL??? It is around 75 LINES LONG!!!!!!
// Thank you SDL and Raylib!!!
#ifndef COMPILER_SETUP_BIT_ALLIGNMENTT
    #ifndef SDL_DEPRECATED
    #  if defined(__GNUC__) && (__GNUC__ >= 4)  /* technically, this arrived in gcc 3.1, but oh well. */
    #    define SDL_DEPRECATED __attribute__((deprecated))
    #  else
    #    define SDL_DEPRECATED
    #  endif
    #endif


    /* Some compilers use a special export keyword */
    #ifndef DECLSPEC
    # if defined(__WIN32__) || defined(__WINRT__) || defined(__CYGWIN__) || defined(__GDK__)
    #  ifdef DLL_EXPORT
    #   define DECLSPEC __declspec(dllexport)
    #  else
    #   define DECLSPEC
    #  endif
    # elif defined(__OS2__)
    #   ifdef BUILD_SDL
    #    define DECLSPEC    __declspec(dllexport)
    #   else
    #    define DECLSPEC
    #   endif
    # else
    #  if defined(__GNUC__) && __GNUC__ >= 4
    #   define DECLSPEC __attribute__ ((visibility("default")))
    #  else
    #   define DECLSPEC
    #  endif
    # endif
    #endif
    // No thx ^_^ ^^

    /* Force structure packing at 4 byte alignment.
   This is necessary if the header is included in code which has structure
   packing set to an alternate value, say for loading structures from disk.
   The packing is reset to the previous value in close_code.h | and  Happy 100th LINE!!!!
    */
    #if defined(_MSC_VER) || defined(__MWERKS__) || defined(__BORLANDC__)
    #ifdef _MSC_VER
    #pragma warning(disable: 4103)
    #endif
    #ifdef __clang__
    #pragma clang diagnostic ignored "-Wpragma-pack"
    #endif
    #ifdef __BORLANDC__
    #pragma nopackwarning
    #endif
    #ifdef _WIN64
    /* Use 8-byte alignment on 64-bit architectures, so pointers are aligned */
    #pragma pack(push,8)
    #else
    #pragma pack(push,4)
    #endif
    #endif /* Compiler needs structure packing set */

    /* Apparently this is needed by several Windows compilers */
    #if !defined(__MACH__)
    #ifndef NULL
    #ifdef __cplusplus
    #define NULL 0
    #else
    #define NULL ((void *)0)
    #endif
    #endif /* NULL */
    #endif /* ! Mac OS X - breaks precompiled headers */

    /* Reset structure packing at previous byte alignment */
    #if defined(_MSC_VER) || defined(__MWERKS__) || defined(__BORLANDC__)
    #ifdef __BORLANDC__
    #pragma nopackwarning
    #endif
    #pragma pack(pop)
    #endif /* Compiler needs structure packing set */
#endif 

// the begin of this
#ifndef FUNCTION_REPLACEMENT_SCPP // Function Replacement
    #define print printf // use print instead of printf 
    #define ret return // works for me though :) use return function
    #define argch int argc // I ain't sure
    #define str string
    // #define iosy scanf // ... ????...
#endif 

#ifndef SCANF_FUNCTION_REPL_AND_VARS
    #define inid scanf // in - input id - id so input identification RECOMMENDED
    #define input scanf // if you rly like py
    #define inout_sys scanf // if you want to be specific
    #define iosys scanf //if you want to be specific but short
    #define inout_in_identification scanf // IF you REALLY Want to be specific
    #define input_output_system_input_identification scanf // REALLY REALLY SPECIFIC
    #define SCINT "%d" // SC-Scanf INT, yknow 
    #define DAT_TYPE_INT "%d"
    #define SCFL "%f" // Hey that's me, Float!
    #define DAT_TYPE_FLOAT "%f"
    #define SCSTR "%s" // Strings
    #define DAT_TYPE_STRING "%s"`
#endif 

#ifndef DEFAULT_VARIABLE_REPLACEMENT
    #define true 1
    #define false 0
    #define EXT_OK 0
    #define EXIT_NS 1 // Exit Non secure / error
    #define EXT_ERR 1 // another name for this 
#endif

// Yeah I know that conflicts between raylib and SDL but oh god.
#ifndef MATH_FUNC__ // borrowed from Raylib.h
    #ifndef PI
    #define PI 3.14159265358979323846f
    #endif
    #ifndef DEG2RAD
        #define DEG2RAD (PI/180.0f)
    #endif
    #ifndef RAD2DEG
        #define RAD2DEG (180.0f/PI)
    #endif
#endif 



#ifndef OPTIONAL_FUNCTION_REPLACEMENT
    #define leave abort
    #define elif else if
    #define CLR color
#endif

// OH MYGOD NOW I AM TIRED MAKING =v 0.2 BETA.... 
#ifndef BUILT_IN_FUNCTION
    void version() { // 200th line let's gooooooOoooooo!
        printf("v 0.2 (Beta)");
    }

    void contribute() {
        printf("Contribute on Github :)");
    }
    
    void license() {
        printf("GNU General Public License (GPL 3) \n read on :- <https://www.gnu.org/licenses/gpl-3.0.en.html> ");
    }

    void creator() {
        printf("@float_3.14 on YT. See on <https://youtube.com/@float_3.14>");
    }

    void updates(){
        printf("Available on Github ");
    }

    #define VERSION__SCPP "v 0.2 Beta"
#endif

#endif //SCPP_H or MAIN_CODE