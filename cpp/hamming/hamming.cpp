#include "hamming.h"

using namespace std;

namespace hamming {

    size_t compute(string a, string b)
    {
        if (a.length() != b.length())
        {
            throw domain_error("Length of input strings does not match.");
        }
        else
        {
            size_t counter = 0;
            for (size_t i = 0; i < a.length(); i++)
            {
                if (a[i] != b[i])
                {
                    counter++;
                }
            }
            return counter;
        }
    }

}  // namespace hamming
