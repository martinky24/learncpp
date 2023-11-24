# Learn C++ Tutorial

Tutorial link: <https://www.learncpp.com/>

Last left off on: <https://www.learncpp.com/cpp-tutorial/object-relationships/> (this link might not always be up to date)

**NOTE:** Skipped chapter 21 (operator overloading)

Further reading (TODO):

- [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md)
- [Google C++ style guide](https://google.github.io/styleguide/cppguide.html)
- [Bit manipulation optional chapter](https://www.learncpp.com/cpp-tutorial/bit-flags-and-bit-manipulation-via-stdbitset/)


# Manual `g++` invocation

Primarily works on work `blazmmc1` box with gcc 4.8.5:

```sh
g++ -ggdb -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++11 main.cpp -o main.out
```

blazktm g++ location: `/opt/rh/gcc-toolset-12/root/usr/bin/g++`
