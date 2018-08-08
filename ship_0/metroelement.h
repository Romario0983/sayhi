#ifndef METROELEMENT_H
#define METROELEMENT_H

#include <QObject>
#include <Qt3DCore/QEntity>

struct RPoint
{
    double x;
    double y;
    double z;
};

class MetroElement : public QObject
{
    Q_OBJECT
    //XYZ
    Q_PROPERTY(double x READ x WRITE setx NOTIFY xChanged)
    Q_PROPERTY(double y READ y WRITE sety NOTIFY yChanged)
    Q_PROPERTY(double z READ z WRITE setz NOTIFY zChanged)
    Q_PROPERTY(QString name READ name WRITE setname NOTIFY nameChanged)

public:
    explicit MetroElement(RPoint point, const QString name, Qt3DCore::QEntity *rootEntity, QObject *parent = nullptr);
    ~MetroElement();

public:
    //XYZ
    double x() const;
    void setx(double new_x);
    double y() const;
    void sety(double new_y);
    double z() const;
    void setz(double new_z);

    //NAME
    QString name() const ;
    void setname(const QString &new_name);

private:
    //Private properties
    double _x, _y, _z;
    QString _name;

protected:

    Qt3DCore::QEntity *myEntity;


signals:
    //XYZ
    void xChanged();
    void yChanged();
    void zChanged();
    void nameChanged();

public slots:


};




#endif // METROELEMENT_H
