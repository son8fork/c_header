#pragma once

#include <cerrno>
#include <clocale>
#include <cstdarg>

#include "libc.hxx"

namespace c {
    // locale
    using std::lconv;
    using std::localeconv;
    using std::setlocale;
    // stdarg
    using std::va_list;
    // libc.hxx->stdlib
    using std::bsearch;
    using std::rand;
    using std::srand;
    using std::qsort;
}
