#include "bungalowfactory.h"

House *BungalowFactory::makeHouse()
{
    return new House;
}
