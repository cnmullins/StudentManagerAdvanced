#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

class student
{
    private:
        std::string firstName = "";
        std::string lastName = "";
        double score = 0;

    public:
        std::vector<double> grades;
        void setName(std::string, std::string);
        void addGrade(double);
        double getScore();
        std::string fullName();
};
#endif
