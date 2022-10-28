#include "Course.hpp"

Course::Course(std::string courseName, Professor professor)
{
    this->courseName = courseName;
    this->professor = professor;
}

void Course::addStudent(Student student)
{
    students.push_back(student);
}

void Course::dropStudent(Student student)
{
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getName() == student.getName())
        {
            students.erase(students.begin() + i);
        }
    }
}

void Course::printStudents()
{
    for (int i = 0; i < students.size(); i++)
    {
        std::cout << students[i].getName() << std::endl;
    }
}

void Course::printProfessor()
{
    std::cout << professor.getName() << std::endl;
}

std::string Course::getCourseName()
{
    return courseName;
}