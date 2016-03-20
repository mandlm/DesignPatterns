#include "scenereader.h"

SceneReader::SceneReader(Scene &scene, SceneConverter &converter)
    : m_scene(scene)
    , m_sceneConverter(converter)
{

}

void SceneReader::construct()
{
    for (const Scene::Face &face : m_scene.faces())
    {
        for (const Scene::Vertex &vertex : face)
        {
            m_sceneConverter.buildVertex(vertex.x(), vertex.y(), vertex.z());
        }

        m_sceneConverter.buildFace(face.size());
    }
}
