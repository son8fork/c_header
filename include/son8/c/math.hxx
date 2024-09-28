#pragma once

/*
    Math C related functionality
*/

#include <cfenv>
#include <cfloat>
//#include <cmath>

#include "libc.hxx"

namespace c {
    // fenv
    using std::fenv_t;
    using std::fexcept_t;
    using std::fegetenv;
    using std::fegetexceptflag;
    using std::fegetround;
    using std::feclearexcept;
    using std::feholdexcept;
    using std::feraiseexcept;
    using std::fesetenv;
    using std::fesetexceptflag;
    using std::fesetround;
    using std::fetestexcept;
    using std::feupdateenv;
    // libc.hxx->inttypes
    using std::imaxabs;
    using std::imaxdiv;
    // libc.hxx->stdlib
    using std::div_t;
    using std::ldiv_t;
    using std::lldiv_t;
    using std::abs;
    using std::div;
    using std::labs;
    using std::ldiv;
    using std::llabs;
    using std::lldiv;
}
