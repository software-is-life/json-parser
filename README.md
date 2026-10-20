## Building the project
```text
g++ json-parser.cpp -o json-parser.o -std=c++20
```

## Testing
This project uses CMAKE and google testing with following configuration.

Project was set up by following the [GoogleTest - Quickstart: CMake tutorial](https://google.github.io/googletest/quickstart-cmake.html)

## How to run tests locally?
```text
cmake -S . -B build
cmake --build build
cd build && ctest
```


## Context 
Part of the [Coding Challenges](https://codingchallenges.fyi/challenges/challenge-json-parser) Series.

This project is built with C++ 20.

[RFC 8259](https://www.rfc-editor.org/info/rfc8259/): STD 90: The Javascript Object Notation (JSON) Data Interchange Format.