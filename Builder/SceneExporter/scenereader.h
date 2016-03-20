#pragma once

#include "scene.h"
#include "sceneconverter.h"

class SceneReader
{
private:
    Scene &m_scene;
    SceneConverter &m_sceneConverter;

public:
    SceneReader(Scene &scene, SceneConverter &converter);

    void construct();
};
