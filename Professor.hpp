#ifndef Professor_hpp
#define Professor_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Person.hpp"

class Professor : public Person
{
public:
    Professor(void);
    Professor(std::string professorName);
};

#endif