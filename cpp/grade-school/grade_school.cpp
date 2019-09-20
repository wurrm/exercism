#include "grade_school.h"

using namespace std;

namespace grade_school {
    school::school()
    {
        students = {};
    }

    int school::search(vector<string> gradeList, string name) const
    {
        // The list of students is small enough to justify a linear search here.
        for (size_t i = 0; i < gradeList.size(); ++i)
        {
            if (name < gradeList[i])
            {
                return i;
            }
        }
        // If name is greater than all e in l, return position after end of list.
        return gradeList.size();
    }

    map<int, vector<string>> school::roster() const
    {
        return students;
    }

    void school::add(string name, int grade)
    {
        vector<string>::iterator it = students[grade].begin() + search(students[grade], name);
        students[grade].insert(it, name);
    }

    vector<string> school::grade(int grade) const
    {
        try
        {
            return students.at(grade);
        }
        catch (out_of_range &e)
        {
            return {};
        }
    }
}  // namespace grade_school
