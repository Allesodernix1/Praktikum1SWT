#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Person
{
private:
    std::string name;

public:
    Person(std::string name);
    Person(void);
    std::string getName();
    void setName(std::string name);
};

#endif