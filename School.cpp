#include "School.hpp"

School::School(std::string schoolName){
    this->schoolName = schoolName;
}

void School::addCourse(Course course)
{
    this->courses.push_back(course);
}

void School::addProfessor(Professor professor)
{
    this->professors.push_back(professor);
}

void School::addStudent(Student student)
{
    this->students.push_back(student);
}

void School::printCourses()
{
    for (int i = 0; i < courses.size(); i++)
    {
        std::cout << courses[i].getCourseName() << std::endl;
    }
}

void School::printProfessors()
{
    for (int i = 0; i < professors.size(); i++)
    {
        std::cout << professors[i].getName() << std::endl;
    }
}

void School::printStudents()
{
    for (int i = 0; i < students.size(); i++)
    {
        std::cout << students[i].getName() << std::endl;
    }
}