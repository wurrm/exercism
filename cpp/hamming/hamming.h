#if !defined(HAMMING_H)
#define HAMMING_H

#if !defined(EXERCISM_RUN_ALL_TESTS)
#define EXERCISM_RUN_ALL_TESTS
#endif

#include <string>
#include <stdexcept>

namespace hamming {
    size_t compute(std::string, std::string);
}  // namespace hamming

#endif // HAMMING_H
