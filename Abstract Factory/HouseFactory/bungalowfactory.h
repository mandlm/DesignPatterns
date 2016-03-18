#pragma once

#include "housefactory.h"

class BungalowFactory : public HouseFactory
{
public:
    virtual House *makeHouse() override;
};
