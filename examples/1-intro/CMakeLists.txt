cmake_minimum_required (VERSION 3.8)

project ("example")

add_executable (cin "src/cin.cpp")
add_executable (comments "src/comments.cpp")
add_executable (cout "src/cout.cpp")

set_property(GLOBAL PROPERTY CXX_STANDARD 17)
