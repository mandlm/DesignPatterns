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

std::shared_ptr<House> BlockOfFlatsFactory::makeHouse()
{
	return nullptr;
}
