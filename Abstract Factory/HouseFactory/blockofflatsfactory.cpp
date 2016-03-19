#include "blockofflatsfactory.h"

#include <iostream>

BlockOfFlatsFactory::BlockOfFlatsFactory()
{
	std::cout << "Created a block of flats factory" << std::endl;
}

BlockOfFlatsFactory::~BlockOfFlatsFactory()
{
	std::cout << "Destroyed a block of flats factory" << std::endl;
}

std::shared_ptr<House> BlockOfFlatsFactory::makeHouse() const
{
	std::shared_ptr<House> blockOfFlats = std::make_shared<House>();

	if (blockOfFlats != nullptr)
	{
		blockOfFlats->setNumerOfFloors(10);
		blockOfFlats->setNumberOfBasements(1);
	}

	return blockOfFlats;
}
