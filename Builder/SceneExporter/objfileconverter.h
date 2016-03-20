#pragma once

#include <string>
#include <vector>

#include "sceneconverter.h"

class ObjFileConverter : public SceneConverter
{
public:
	virtual void buildVertex(double x, double y, double z) override;	
	virtual void buildFace(size_t numberOfVertices) override;

    std::string getResult() const;
};

