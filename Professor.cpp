#include "Professor.hpp"

Professor::Professor(std::string professorName)
{
    this->setName(professorName);
}

Professor::Professor(void)
{
    this->setName("No Name");
}
