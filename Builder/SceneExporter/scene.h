#pragma once

#include <list>

class Scene
{
public:
    class Vertex
    {
    private:
        double m_x;
        double m_y;
        double m_z;

    public:
        Vertex(double x, double y, double z);

        double &x();
        double &y();
        double &z();

        const double &x() const;
        const double &y() const;
        const double &z() const;
    };

    using Face = std::list<Vertex>;
    using Faces = std::list<Face>;

private:
    Faces m_faces;

public:
    const Faces &faces();
    void addFace(Face &&face);

    static Scene createSampleScene();
};

