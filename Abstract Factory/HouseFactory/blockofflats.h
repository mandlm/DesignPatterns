#pragma once

#include "house.h"

class BlockOfFlats : public House
{
public:
    BlockOfFlats();
    ~BlockOfFlats();

    virtual std::string toString() const override;
};

