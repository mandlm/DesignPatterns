#pragma once

#include "house.h"

class HouseFactory
{
public:
    virtual House *makeHouse() = 0;
};

