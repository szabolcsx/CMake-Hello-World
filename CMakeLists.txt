cmake_minimum_required (VERSION 2.6)
project (HelloWorld)
add_executable(HelloWorld hello_world.cpp)
target_compile_features(HelloWorld PRIVATE cxx_lambdas)