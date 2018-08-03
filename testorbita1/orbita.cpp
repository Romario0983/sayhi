#include "orbita.h"

#include <Qt3DCore/qtransform.h>

Orbita::Orbita(QObject *parent)
    : QObject(parent)
    , m_target(nullptr)
    , m_matrix()
    , m_radius(1.0f)
    , m_angle(0.0f)
{
}

void Orbita::setTarget(Qt3DCore::QTransform *target)
{
    if (m_target != target) {
        m_target = target;
        emit targetChanged();
    }
}

Qt3DCore::QTransform *Orbita::target() const
{
    return m_target;
}

void Orbita::setRadius(float radius)
{
    if (!qFuzzyCompare(radius, m_radius)) {
        m_radius = radius;
        updateMatrix();
        emit radiusChanged();
    }
}

float Orbita::radius() const
{
    return m_radius;
}

void Orbita::setAngle(float angle)
{
    if (!qFuzzyCompare(angle, m_angle)) {
        m_angle = angle;
        updateMatrix();
        emit angleChanged();
    }
}

float Orbita::angle() const
{
    return m_angle;
}

void Orbita::updateMatrix()
{
    m_matrix.setToIdentity();
    m_matrix.rotate(m_angle, QVector3D(0.0f, 1.0f, 0.0f));
    m_matrix.translate(m_radius, 0.0f, 0.0f);
    m_target->setMatrix(m_matrix);
}
