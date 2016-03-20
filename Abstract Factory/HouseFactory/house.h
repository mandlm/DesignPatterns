#pragma once

#include <string>

class House
{
protected:
	size_t m_numberOfFloors = 0;
	size_t m_numberOfBasements = 0;

public:
	void setNumerOfFloors(size_t numberOfFloors);
	void setNumberOfBasements(size_t numberOfBasements);

    virtual std::string toString() const = 0;
};
