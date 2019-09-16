#include "nucleotide_count.h"

using namespace std;

namespace nucleotide_count {
    counter::counter(string dna_string)
    {
        ntc = {{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
        for (char c : dna_string)
        {
            try
            {
                ntc.at(c)++;
            }
            catch (out_of_range &e)
            {
                throw invalid_argument("DNA string must contain only valid nucleotides.");
            }
        }
    }

    int counter::count(char c) const
    {
        try
        {
            return ntc.at(c);
        }
        catch (out_of_range &e)
        {
            throw invalid_argument("Argument must be valid nucleotide.");
        }
    }

    map<char, int> counter::nucleotide_counts() const
    {
        return ntc;
    }
}  // namespace nucleotide_count
