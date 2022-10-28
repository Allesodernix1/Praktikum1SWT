#include "Person.hpp"


Person::Person(std::string name)
{
    this->name = name;
}

Person::Person(void)
{
    this->name = "No Name";
}

std::string Person::getName()
{
    return name;
}

void Person::setName(std::string name)
{
    this->name = name;
}