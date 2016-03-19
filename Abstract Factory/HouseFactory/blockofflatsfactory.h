#pragma once

#include "housefactory.h"

class BlockOfFlatsFactory : public HouseFactory
{
public:
	BlockOfFlatsFactory();
	~BlockOfFlatsFactory();

    virtual House *makeHouse() override;
};

