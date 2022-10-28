#include "Course.hpp"
#include "Professor.hpp"
#include "Student.hpp"
#include "School.hpp"
#include "Person.hpp"
int main()
{
    Professor professor("Dr. Smith");
    Course course("C++", professor);
    Student student1("John");
    Student student2("Mary");
    Student student3("Bob");
    course.addStudent(student1);
    course.addStudent(student2);
    course.addStudent(student3);
    std::cout << "Students in the course:" << std::endl;
    course.printStudents();
    std::cout << "Professor in the course:" << std::endl;
    course.printProfessor();
    course.dropStudent(student2);
    std::cout << "Students in the course (after remove Mary):" << std::endl;
    course.printStudents();
    return 0;
}