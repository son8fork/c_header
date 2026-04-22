## INCLUDE
> library interface or public files with `hxx` extension

Functionality are separated in eight headers under **`son8::c`** namespace:

- [**`<son8/c/base.hxx>`**](./include/son8/c/base.hxx): int types and limits, included by all other headers
- [**`<son8/c/byte.hxx>`**](./include/son8/c/byte.hxx): memory allocation and manipulation functions
- [**`<son8/c/char.hxx>`**](./include/son8/c/char.hxx): all c string and character related functions
- [**`<son8/c/exec.hxx>`**](./include/son8/c/exec.hxx): abnormal program termination, signal
- [**`<son8/c/file.hxx>`**](./include/son8/c/file.hxx): file related functionality
- [**`<son8/c/math.hxx>`**](./include/son8/c/math.hxx): all math functions and float environment
- [**`<son8/c/util.hxx>`**](./include/son8/c/util.hxx): other utility stuff - like time, locale, rand, etc
- [**`<son8/c/wide.hxx>`**](./include/son8/c/wide.hxx): all functions related to wide characters

**AND ALSO CONTAIN ONE `C`INGULAR** [**`<son8/c.hxx>`**](./include/son8/c.hxx) **to rule them `all`**

###### Anything other than header files SHOULD avoid this folder
