#pragma once

#include "housefactory.h"

class BlockOfFlatsFactory : public HouseFactory
{
public:
	BlockOfFlatsFactory();
	~BlockOfFlatsFactory();

    virtual std::shared_ptr<House> makeHouse() override;
};

