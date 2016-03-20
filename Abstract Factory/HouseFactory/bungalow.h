#pragma once

#include "house.h"

class Bungalow : public House
{
public:
    Bungalow();
    ~Bungalow();

    virtual std::string toString() const override;
};
