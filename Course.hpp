#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Student.hpp"
#include "Professor.hpp"

class Course
{
private:
    std::string courseName;
    std::vector<Student> students;
    Professor professor;

public:
    Course(std::string courseName, Professor professor);
    std::string getCourseName();
    void addStudent(Student student);
    void dropStudent(Student student);
    void printStudents();
    void printProfessor();
};

#endif