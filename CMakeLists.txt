cmake_minimum_required(VERSION 3.17)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(Algorithms main.cpp prototypes.h sorts/selection.cpp sorts/merge.cpp sorts/quick.cpp sorts/insertion.cpp sorts/shaker.cpp sorts/heap.cpp sorts/shell.cpp swap.cpp libs.h "eratosthenes sieve.cpp" euclidean_algorigthm.cpp searches/linear.cpp searches/binary.cpp searches/interpolation.cpp searches/fibonacci.cpp searches/trie.cpp)