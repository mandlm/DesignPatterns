#pragma once

#include "housefactory.h"

class BungalowFactory : public HouseFactory
{
public:
	BungalowFactory();
	~BungalowFactory();

    virtual std::shared_ptr<House> makeHouse() const override;
};
