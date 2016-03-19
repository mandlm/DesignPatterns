#pragma once

#include <string>

class House
{
private:
	size_t m_numberOfFloors = 0;
	size_t m_numberOfBasements = 0;

public:
	House();
	~House();

	void setNumerOfFloors(size_t numberOfFloors);
	void setNumberOfBasements(size_t numberOfBasements);

	std::string toString() const;
};
