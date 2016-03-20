#include "scene.h"

Scene::Vertex::Vertex(double x, double y, double z)
    : m_x(x)
    , m_y(y)
    , m_z(z)
{

}

double &Scene::Vertex::x()
{
    return m_x;
}

double &Scene::Vertex::y()
{
    return m_y;
}

double &Scene::Vertex::z()
{
    return m_z;
}

const double &Scene::Vertex::x() const
{
    return m_x;
}

const double &Scene::Vertex::y() const
{
    return m_y;
}

const double &Scene::Vertex::z() const
{
    return m_z;
}

const Scene::Faces &Scene::faces()
{
    return m_faces;
}

void Scene::addFace(Scene::Face &&face)
{
    m_faces.push_back(face);
}

Scene Scene::createSampleScene()
{
    Scene scene;

    {
        Face face;
        face.push_back(Vertex(0.0, 0.0, 0.0));
        face.push_back(Vertex(1.0, 0.0, 0.0));
        face.push_back(Vertex(1.0, 1.0, 0.0));
        face.push_back(Vertex(0.0, 1.0, 0.0));
        scene.addFace(std::move(face));
    }

    {
        Face face;
        face.push_back(Vertex(0.0, 0.0, 1.0));
        face.push_back(Vertex(1.0, 0.0, 1.0));
        face.push_back(Vertex(1.0, 1.0, 1.0));
        face.push_back(Vertex(0.0, 1.0, 1.0));
        scene.addFace(std::move(face));
    }

    return scene;
}

