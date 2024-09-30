#pragma once

/*
    Memory C related functionality
*/

#include "libc.hxx"

#include <cstring>

namespace c {
    // libc.hxx->stdlib
    using std::calloc;
    using std::free;
    using std::malloc;
    using std::realloc;
    // -- C++17
    using std::aligned_alloc;
    // string
    using std::memchr;
    using std::memcmp;
    using std::memcpy;
    using std::memmove;
    using std::memset;
}
