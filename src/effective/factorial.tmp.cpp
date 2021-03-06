#include <iostream> // for std::cout 
#include "cpp.tmp.hpp"  // for kLOOP_TIMES

template <int N>
struct Factorial {
  enum { value = N * Factorial<N - 1>::value };
};

template <>
struct Factorial<0> {
  enum { value = 1 };
};


int main() {
  for (int i = 0; i < kLOOP_TIMES; i++) {
    int x = Factorial<10>::value;
  }

  return 0;
}