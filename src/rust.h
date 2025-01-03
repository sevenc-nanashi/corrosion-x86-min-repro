#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

extern "C" {

int32_t rust_add(int32_t a, int32_t b);

int32_t rust_random();

}  // extern "C"
