#pragma once

/*
    Execution C related functionality
*/

#include "libc.hxx"

#include <csetjmp>
#include <csignal>

namespace c {
    // libc.hxx->stdlib
    using std::abort;
    using std::atexit;
    using std::exit;
    using std::system;
    // -- C++11
    using std::at_quick_exit;
    using std::quick_exit;
    using std::_Exit;
    // setjmp
    using std::jmp_buf;
    using std::longjmp;
    // signal
    using std::sig_atomic_t;
    using std::signal;
    using std::raise;
}
