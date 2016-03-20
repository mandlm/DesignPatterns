#include "bungalowfactory.h"

#include <iostream>

#include "bungalow.h"

BungalowFactory::BungalowFactory()
{
	std::cout << "Created a bungalow factory" << std::endl;
}

BungalowFactory::~BungalowFactory()
{
	std::cout << "Destroyed a bungalow factory" << std::endl;
}

std::shared_ptr<House> BungalowFactory::makeHouse() const
{
    std::shared_ptr<House> bungalow = std::make_shared<Bungalow>();

	if (bungalow != nullptr)
	{
		bungalow->setNumerOfFloors(1);
		bungalow->setNumberOfBasements(0);
	}

	return bungalow;
}
