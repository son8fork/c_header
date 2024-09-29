#pragma once

/*
    Execution C related functionality
*/

#include <csetjmp>
#include <csignal>

#include "libc.hxx"

namespace c {
    // setjmp
    using std::jmp_buf;
    using std::longjmp;
    // signal
    using std::sig_atomic_t;
    using std::signal;
    using std::raise;
    // libc.hxx->stdlib
    using std::abort;
    using std::atexit;
    using std::exit;
    using std::system;
    // -- C++11
    using std::at_quick_exit;
    using std::quick_exit;
    using std::_Exit;
}
