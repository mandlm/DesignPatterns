#pragma once

#include "housefactory.h"

class BungalowFactory : public HouseFactory
{
public:
	BungalowFactory();
	~BungalowFactory();

    virtual House *makeHouse() override;
};
