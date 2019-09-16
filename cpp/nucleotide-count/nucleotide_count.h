#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>
#include <stdexcept>

namespace nucleotide_count {
    class counter
    {
        std::string nt;
        std::map<char, int> ntc;
    public:
        counter(std::string);
        int count(char) const;
        std::map<char, int> nucleotide_counts() const;
    };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
