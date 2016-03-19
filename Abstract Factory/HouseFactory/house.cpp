#include "house.h"

#include <iostream>
#include <sstream>

House::House()
{
	std::cout << "Created a house" << std::endl;
}

House::~House()
{
	std::cout << "Destroyed a house" << std::endl;
}

void House::setNumerOfFloors(size_t numberOfFloors)
{
	m_numberOfFloors = numberOfFloors;
}

void House::setNumberOfBasements(size_t numberOfBasements)
{
	m_numberOfBasements = numberOfBasements;
}

std::string House::toString() const
{
	std::stringstream result;

	result << "Floors: " << m_numberOfFloors << std::endl;
	result << "Basements: " << m_numberOfBasements << std::endl;

	return result.str();
}
