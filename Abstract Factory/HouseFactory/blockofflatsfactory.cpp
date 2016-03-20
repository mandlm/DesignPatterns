#include "blockofflatsfactory.h"

#include <iostream>

#include "blockofflats.h"

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
    std::shared_ptr<House> blockOfFlats = std::make_shared<BlockOfFlats>();

	if (blockOfFlats != nullptr)
	{
		blockOfFlats->setNumerOfFloors(10);
		blockOfFlats->setNumberOfBasements(1);
	}

	return blockOfFlats;
}
