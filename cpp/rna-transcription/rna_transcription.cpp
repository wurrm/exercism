#include "rna_transcription.h"

using namespace std;

namespace rna_transcription {
    char to_rna(char nt)
    {
        switch (nt)
        {
            case 'G':
                return 'C';
            case 'C':
                return 'G';
            case 'T':
                return 'A';
            case 'A':
                return 'U';
            default:
                throw domain_error("Input must contain only valid DNA nucleotides.");
        }
    }

    string to_rna(string dna)
    {
        string rna = "";

        for (char c : dna)
        {
            rna.push_back(to_rna(c));
        }

        return rna;
    }
}  // namespace rna_transcription
