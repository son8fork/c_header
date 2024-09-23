#pragma once

#include <ctime>

#include "libc.hxx"

namespace c {
    using std::clock_t;
    using std::clock;
    using std::time_t;
    using std::ctime;
    using std::difftime;
    using std::time;
    using std::timespec;
    using std::timespec_get;
    using std::tm;
    using std::asctime;
    using std::strftime;
    // uses more then one type in arguments and return
    using std::gmtime;
    using std::localtime;
    using std::mktime;
}
