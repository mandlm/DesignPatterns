#pragma once

#include <string>
#include <vector>
#include <list>

#include "sceneconverter.h"

class ObjFileConverter : public SceneConverter
{
private:
    class Vertex
    {
    public:
        double x, y, z;
    };

private:
    std::vector<Vertex> m_vertexBuffer;
    std::list<std::list<Vertex>> m_faces;

public:
    ObjFileConverter();

	virtual void buildVertex(double x, double y, double z) override;	
	virtual void buildFace(size_t numberOfVertices) override;

    std::string getResult() const;
};

