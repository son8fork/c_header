#pragma once
#ifndef SON8_C_BYTE_HXX
#define SON8_C_BYTE_HXX

/*
    Memory C related functionality
*/

#include "base.hxx"

#include <cstring>

namespace son8::c {
    // base.hxx->stdlib
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
} // namespace son8::c

#endif//SON8_C_BYTE_HXX

/*ᦒ Ⓒ 2024 Oleg'Ease'Kharchuk ᦒ*/
