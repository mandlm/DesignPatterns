#include <iostream>
#include <memory>

#include "bungalowfactory.h"
#include "blockofflatsfactory.h"

enum HouseType
{
	None,
	Bungalow,
	BlockOfFlats
};

HouseType queryHouseType()
{
	while (true)
	{
		char selection;

		std::cout << "Please choose your type:" << std::endl;
		std::cout << "(1) Bungalow" << std::endl;
		std::cout << "(2) Block of flats" << std::endl;
		std::cout << "(q) Quit" << std::endl;

		std::cout << "? ";
		std::cin >> selection;

		switch (selection)
		{
		case 'q':
			return None;
		case '1':
			return Bungalow;
		case '2':
			return BlockOfFlats;
		default:
			std::cout << "Invalid selection!" << std::endl;
			break;
		}
	}
}

std::shared_ptr<HouseFactory> getHouseFactory(HouseType houseType)
{
	switch (houseType)
	{
	case Bungalow:
		return std::make_shared<BungalowFactory>();
	case BlockOfFlats:
		return std::make_shared<BlockOfFlatsFactory>();
	default:
		return nullptr;
	}
}

int main(int argc, char *argv[])
{
	std::shared_ptr<HouseFactory> houseFactory(getHouseFactory(queryHouseType()));

    return 0;
}
