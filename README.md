# Learn C++ Tutorial

Tutorial link: <https://www.learncpp.com/>

Last left off on: <https://www.learncpp.com/cpp-tutorial/introduction-to-object-oriented-programming/> (this link might not always be up to date)

Further reading (TODO):

- <https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md>
- [Bit manipulation optional chapter](https://www.learncpp.com/cpp-tutorial/bit-flags-and-bit-manipulation-via-stdbitset/)

# Manual `g++` invocation

Primarily works on work `blazmmc1` box with gcc 4.8.5:

```sh
g++ -ggdb -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++11 main.cpp -o main.out
```

blazktm g++ location: `/opt/rh/gcc-toolset-12/root/usr/bin/g++`
