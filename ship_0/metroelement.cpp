#include "metroelement.h"

MetroElement::MetroElement(RPoint point, const QString &name, Qt3DCore::QEntity *rootEntity, QObject *parent) :
    QObject(parent), _x(point.x), _y(point.y), _z(point.z), _name(name)
{
    drawEntity(rootEntity);
}

//****************************************XYZ Properties *********************************************
double  MetroElement::x() const
{
    return _x;
}

void MetroElement::setx(double new_x)
{
    if (!qFuzzyCompare(_x, new_x)) {
        _x = new_x;
        emit xChanged();
    }
}

double  MetroElement::y() const
{
    return _y;
}

void MetroElement::sety(double new_y)
{
    if (!qFuzzyCompare(_y, new_y)) {
        _y = new_y;
        emit yChanged();
    }
}

double  MetroElement::z() const
{
    return _z;
}

void MetroElement::setz(double new_z)
{
    if (!qFuzzyCompare(_z, new_z)) {
        _z = new_z;
        emit zChanged();
    }
}

//*****************************************NAME Properties **********************************

QString  MetroElement::name() const
{
    return _name;
}

void MetroElement::setname(QString &new_name)
{
        _name = new_name;
        emit nameChanged();
}
