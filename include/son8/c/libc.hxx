#pragma once

// header only with most nessessary C functionality and types
// this file included in all other headers

#include <cassert>
//#include <cinttypes>
#include <climits>
#include <cstddef>
#include <cstdint>
#include <cstdlib>

namespace c {
    // stddef
    using std::max_align_t;
    using std::nullptr_t;
    using std::ptrdiff_t;
    using std::size_t;
    using std::byte;
    using std::to_integer;
}
