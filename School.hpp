#ifndef School_hpp
#define School_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

#include "Student.hpp"
#include "Professor.hpp"
#include "Course.hpp"
#include "School.hpp"

class School
{
private:
    std::string schoolName;
    std::vector<Course> courses;
    std::vector<Professor> professors;
    std::vector<Student> students;

public:
    School(std::string schoolName);
    void addCourse(Course course);
    void addProfessor(Professor professor);
    void addStudent(Student student);
    void printCourses();
    void printProfessors();
    void printStudents();
};

#endif