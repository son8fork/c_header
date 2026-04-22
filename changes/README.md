## CHANGES
> [keep a changelog](https://keepachangelog.com/en/1.1.0/) with [semantic versioning](https://semver.org/spec/v2.0.0.html)

### 0.1.0 - 2026-04-22

#### Added

- Makefile and its usage

#### Changed

- license from BSL-1.0 to Apache-2.0
- include headers with angle brackets instead of double quotes

#### Fixed

- MSVC compiler options
- remove pragma once from headers
- MSVC not support for aligned_alloc
- fix gcc under version 14 not supporting f and l suffixed math functions in std namespace
- fix llvm clang not supporting special math functions

### 0.0.2 - 2025-02-01

#### Changed

- rename `call.hxx` to `c.hxx`
- cmake related refactoring

### 0.0.1 - 2024-10-02
> initial file structure with almost all entities added
