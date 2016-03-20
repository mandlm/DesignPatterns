#pragma once

#include <cstdlib>

class SceneConverter
{
public:
    virtual void buildVertex(double x, double y, double z) {}
    virtual void buildFace(size_t numberOfVertices) {}
};
