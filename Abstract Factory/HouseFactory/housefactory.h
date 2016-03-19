#pragma once

#include <memory>

#include "house.h"

class HouseFactory
{
public:
    virtual std::shared_ptr<House> makeHouse() const = 0;
};

