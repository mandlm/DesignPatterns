#include "blockofflats.h"

#include <iostream>
#include <sstream>

BlockOfFlats::BlockOfFlats()
{
    std::cout << "Created a block of flats" << std::endl;
}

BlockOfFlats::~BlockOfFlats()
{
    std::cout << "Destroyed a block of flats" << std::endl;
}

std::string BlockOfFlats::toString() const
{
    std::stringstream result;

    result << "Block of flats:" << std::endl;
    result << "  " << "Floors: " << m_numberOfFloors << std::endl;
    result << "  " << "Basements: " << m_numberOfBasements << std::endl;

    return result.str();
}
