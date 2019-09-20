#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#include <string>
#include <stdexcept>

namespace rna_transcription {
    char to_rna(char);
    std::string to_rna(std::string);
}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H
