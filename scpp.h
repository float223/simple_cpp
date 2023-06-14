/*
v.0.3 Simple C++
(copyrights)
Simple C++ | Made to revolutionalize C++ programming | Making it easy to learn C++
Copyright (C) 2023 SJ(Float) 

This program (or library) is free software: you can redistribute it and/or modify
it under the terms of GNU General Public License as Published by 
the Free Software Foundation, either version 3 of the license, or (at your option)
any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even The Implied warranty of MERCHENTABILITY or FITNESS FOR
A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You Should recive a copy og the GNU General Public License along with this
program. If not, See <https://www.gnu.org/licenses/>

If you DIDN'T GET A LICENSE.TXT AND IDENTIFY.TXT AFTER V0.3, THIS PROGRAM
ISN'T OFFICIAL. Read IDENTIFY.txt for more info. 

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
    int x; // x and y are integers by default
    int y; // this is used if you want to do arithmetic operations
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
#ifndef FUNCTION_MACROS_SCPP // Function Replacement
    #define print printf // use print instead of printf 
    #define ret return // works for me though :) use return function | Read identify.txt
    #define argch int argc // I ain't sure
    #define str string
    #define input scanf // As per This We are concluding that scanf function is used for scanning the data 
    //type and store it to a variable. 
#endif 


#ifndef DEFAULT_VARIABLE_REPLACEMENT
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