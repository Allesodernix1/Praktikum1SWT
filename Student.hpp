#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Person.hpp"

class Student : public Person
{
private:
    std::string studentName;

public:
    Student(std::string studentName);
    Student(void);
};

#endif