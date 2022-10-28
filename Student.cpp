#include "Student.hpp"

Student::Student(std::string studentName)
{
    this->setName(studentName);
}

Student::Student(void)
{
    this->setName("No Name");
}