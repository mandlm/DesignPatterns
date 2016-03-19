#include "bungalowfactory.h"

#include <iostream>

BungalowFactory::BungalowFactory()
{
	std::cout << "Created a bungalow factory" << std::endl;
}

BungalowFactory::~BungalowFactory()
{
	std::cout << "Destroyed a bungalow factory" << std::endl;
}

std::shared_ptr<House> BungalowFactory::makeHouse()
{
    return nullptr;
}
