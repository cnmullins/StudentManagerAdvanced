#include "student.h"
#include <string>

void student::setName(std::string first, std::string last)
{
    student::firstName = first;
    student::lastName = last;
}

std::string student::fullName()
{
    std::string output = "";
    output.append(firstName);
    output.append(" ");
    output.append(lastName);
    return output;
}

void student::addGrade(double adding)
{
    student::grades.push_back(adding);
}

double student::getScore()
{
    double average = 0;
    for (int i = 0; i < student::grades.size(); i++)
    {
        average += student::grades.at(i);
    }
    return average / student::grades.size();
}
