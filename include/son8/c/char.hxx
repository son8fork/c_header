#pragma once

/*
    Character C related functionality
*/

#include <cctype>
#include <cstring>

#include "libc.hxx"

namespace c {
    // ctype
    using std::isalnum;
    using std::isalpha;
    using std::iscntrl;
    using std::isdigit;
    using std::isgraph;
    using std::islower;
    using std::isprint;
    using std::ispunct;
    using std::isspace;
    using std::isupper;
    using std::isxdigit;
    using std::tolower;
    using std::toupper;
    // -- C++11
    using std::isblank;
    // string
    using std::strcat;
    using std::strchr;
    using std::strcmp;
    using std::strcoll;
    using std::strcpy;
    using std::strcspn;
    using std::strerror;
    using std::strlen;
    using std::strncat;
    using std::strncmp;
    using std::strncpy;
    using std::strpbrk;
    using std::strrchr;
    using std::strspn;
    using std::strstr;
    using std::strtok;
    using std::strxfrm;
    // libc.hxx->inttypes
    // -- C++11
    using std::strtoimax;
    using std::strtoumax;
    // libc.hxx->stdlib
    using std::atof;
    using std::atoi;
    using std::atol;
    using std::mblen;
    using std::strtod;
    using std::strtof;
    using std::strtol;
    using std::strtold;
    using std::strtoul;
    // -- C++11
    using std::atoll;
    using std::strtoll;
    using std::strtoull;
}
