#ifndef METROELEMENT_H
#define METROELEMENT_H

#include <QObject>

class MetroElement : public QObject
{
    Q_OBJECT
    //XYZ
    Q_PROPERTY(double x READ x WRITE setx NOTIFY xChanged)
    Q_PROPERTY(double y READ y WRITE sety NOTIFY yChanged)
    Q_PROPERTY(double z READ z WRITE setz NOTIFY zChanged)
    Q_PROPERTY(QString name READ name WRITE name NOTIFY nameChanged)

public:
    explicit MetroElement(QObject *parent = nullptr);

public:
    //XYZ
    double x() const;
    void setx(double new_x);
    double y() const;
    void sety(double new_y);
    double z() const;
    void setz(double new_z);

    //NAME
    QString name() const;
    void setname(QString new_name);

private:
    //Private properties
    double _x, _y, _z;
    QString _name;


signals:
    //XYZ
    void xChanged();
    void yChanged();
    void zChanged();
    void nameChanged();

public slots:


};

#endif // METROELEMENT_H