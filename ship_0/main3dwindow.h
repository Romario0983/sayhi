#ifndef MAIN3DWINDOW_H
#define MAIN3DWINDOW_H

#include <Qt3DExtras/Qt3DWindow>
#include <QDebug>


class Main3DWindow : public Qt3DExtras::Qt3DWindow
{

    Q_OBJECT

public:
    Main3DWindow();
public slots:
    void logCameraVector(const QVector3D &vector);
    void logCameraMatrix(const QMatrix4x4 &projectionMatrix);
    void positionChanged(const QVector3D &position);

};



#endif // MAIN3DWINDOW_H
