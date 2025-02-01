# C_HEADER

> C++ 17 interface library wrapper for standard C functions

## Description

This project is simply a namespace wrapper for standard C functions for C++ 17.

Functionality are separated in eight headers under **`son8::c`** namespace:

- [**`<son8/c/base.hxx>`**](./include/son8/c/base.hxx): int types and limits, included by all other headers
- [**`<son8/c/byte.hxx>`**](./include/son8/c/byte.hxx): memory allocation and manipulation functions
- [**`<son8/c/char.hxx>`**](./include/son8/c/char.hxx): all c string related and ctype functions
- [**`<son8/c/exec.hxx>`**](./include/son8/c/exec.hxx): abnormal program termination, errno, signal, setjmp
- [**`<son8/c/file.hxx>`**](./include/son8/c/file.hxx): just stdio functions
- [**`<son8/c/math.hxx>`**](./include/son8/c/math.hxx): all math functions and float environment
- [**`<son8/c/util.hxx>`**](./include/son8/c/util.hxx): other utility stuff - like time, locale, rand, etc
- [**`<son8/c/wide.hxx>`**](./include/son8/c/wide.hxx): all functions related to wide characters

**AND ALSO CONTAIN ONE `C`INGULAR** [**`<son8/c.hxx>`**](./include/son8/c.hxx) **to rule them `all`**

## Versions

- **`0.0.*`**: alpha versions, patches (all c from std namespace without any 
changes, except adding missing types or/and functions)
- **`0.*.0`**: beta versions, small improvements (compiler problem fixes, 
removing unsupported std functions)
- **`*.0.0`**: stable versions, big changes (may be breaking changes, 
renaming files or reorganizing functions)

**`*` indicates 1 or above** 

## Usage

Intended to be used in my personal projects.

It don't do anything special, just an organized way to use C functions in C++.

One possible usage is to check if compiler supports all C++17 C functions
under **std** namespace.

For example:
- gcc under 14 doesn't support some math `f,l` suffixed functions in std

- or msvc not supporting C++17 `aligned_alloc`.

## NOTES

###### each folder MAY contain README with additional information
