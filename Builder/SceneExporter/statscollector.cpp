#include "statscollector.h"

#include <sstream>

void StatsCollector::buildVertex(double x, double y, double z)
{
    m_numberOfVertices++;
}

void StatsCollector::buildFace(size_t numberOfVertices)
{
    m_numberOfFaces++;
}

std::string StatsCollector::getResult() const
{
    std::stringstream result;

    result << "Number of vertices: " << m_numberOfVertices << std::endl;
    result << "Number of faces: " << m_numberOfFaces << std::endl;

    return result.str();
}
