#include "objfileconverter.h"

#include <sstream>

ObjFileConverter::ObjFileConverter()
{
    m_vertexBuffer.reserve(32);
}

void ObjFileConverter::buildVertex(double x, double y, double z)
{
    m_vertexBuffer.push_back({x, y, z});
}

void ObjFileConverter::buildFace(size_t numberOfVertices)
{
    if (m_vertexBuffer.size() == numberOfVertices)
    {
        std::list<Vertex> vertices;

        for (Vertex &vertex : m_vertexBuffer)
        {
            vertices.push_back(vertex);
        }

        m_faces.push_back(vertices);
    }

    m_vertexBuffer.clear();
}

std::string ObjFileConverter::getResult() const
{
    std::stringstream result;

    for (const std::list<Vertex> &face : m_faces)
    {
        for (const Vertex &vertex : face)
        {
            result << "v " << vertex.x << " " << vertex.y << " " << vertex.z << std::endl;
        }
    }

    result << std::endl;

    size_t offset = 1;
    for (const std::list<Vertex> &face : m_faces)
    {
        result << "f";
        for (size_t i = 0; i < face.size(); ++i)
        {
            result << " " << offset++;
        }
        result << std::endl;
    }

    return result.str();
}
