#pragma once

/*
    Memory C related functionality
*/

#include <cstring>

#include "libc.hxx"

namespace c {
    // string
    using std::memchr;
    using std::memcmp;
    using std::memcpy;
    using std::memmove;
    using std::memset;
    // libc.hxx->stdlib
    using std::calloc;
    using std::free;
    using std::malloc;
    using std::realloc;
    // -- C++17
    using std::aligned_alloc;
}
