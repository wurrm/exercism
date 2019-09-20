#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <map>
#include <string>
#include <vector>
#include <stdexcept>

namespace grade_school {
    class school
    {
        std::map<int, std::vector<std::string>> students;
    private:
        int search(std::vector<std::string>, std::string) const;
    public:
        school();
        std::map<int, std::vector<std::string>> roster() const;
        std::vector<std::string> grade(int) const;
        void add(std::string, int);
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H
