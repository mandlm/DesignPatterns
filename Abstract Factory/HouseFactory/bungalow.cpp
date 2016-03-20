#include "bungalow.h"

#include <iostream>
#include <sstream>

Bungalow::Bungalow()
{
    std::cout << "Created a bungalow" << std::endl;
}

Bungalow::~Bungalow()
{
    std::cout << "Destroyed a bungalow" << std::endl;
}

std::string Bungalow::toString() const
{
    std::stringstream result;

    result << "Bungalow:" << std::endl;
    result << "  " << "Floors: " << m_numberOfFloors << std::endl;
    result << "  " << "Basements: " << m_numberOfBasements << std::endl;

    return result.str();
}
