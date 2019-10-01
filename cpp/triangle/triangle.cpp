#include "triangle.h"

namespace triangle {
    flavor kind(float a, float b, float c)
    {
        if (a <= 0 || b <= 0 || c <= 0)
        {
            throw std::domain_error("All sides must have length > 0.");
        }
        else if (a + b < c || a < b - c || a > b + c)
        {
            throw std::domain_error("Side lengths must not violate the Triangle Inequality.");
        }
        else if (a + b == c || a == b - c || a == b + c)
        {
            return flavor::degenerate;
        }
        else if (a == b && b == c)
        {
            return flavor::equilateral;
        }
        else if (a != b && b != c && a != c)
        {
            return flavor::scalene;
        }
        else
        {
            return flavor::isosceles;
        }
    }
}  // namespace triangle
