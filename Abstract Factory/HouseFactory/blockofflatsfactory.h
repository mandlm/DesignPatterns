#pragma once

#include <memory>

#include "housefactory.h"

class BlockOfFlatsFactory : public HouseFactory
{
public:
	BlockOfFlatsFactory();
	~BlockOfFlatsFactory();

    virtual std::shared_ptr<House> makeHouse() const override;
};

