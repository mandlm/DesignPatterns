#pragma once

#include "sceneconverter.h"

#include <string>

class StatsCollector : public SceneConverter
{
private:
    size_t m_numberOfVertices = 0;
    size_t m_numberOfFaces = 0;

public:
    virtual void buildVertex(double x, double y, double z) override;
    virtual void buildFace(size_t numberOfVertices) override;

    std::string getResult() const;
};

