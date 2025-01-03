#include "rust.h"
#include <cstdint>
#include <iostream>

int main(void) {
  int32_t left = 114;
  int32_t right = 514;

  int32_t result = rust_add(left, right);
  std::cout << left << " + " << right << " = " << result << std::endl;

  std::cout << "This build's random number is " << rust_random() << std::endl;

  return 0;
}
