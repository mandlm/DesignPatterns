#pragma once

#include "housefactory.h"

class BlockOfFlatsFactory : public HouseFactory
{
public:
    virtual House *makeHouse() override;
};

