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

House *BlockOfFlatsFactory::makeHouse()
{
	return nullptr;
}
