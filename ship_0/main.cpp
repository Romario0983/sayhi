#include <QGuiApplication>

#include "main3dwindow.h"
#include "filemodel.h"
#include <Qt3DCore/QEntity>
#include <Qt3DRender/QCamera>
#include <Qt3DRender/QCameraLens>
#include <Qt3DExtras/QOrbitCameraController>
#include <Qt3DExtras/QForwardRenderer>
#include <gsl/gsl_sf.h>


int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);

    Main3DWindow view;

    Qt3DCore::QEntity *rootScene = new Qt3DCore::QEntity;

    // Camera
    Qt3DRender::QCamera *camera = view.camera();
    camera->lens()->setPerspectiveProjection(45.0f, 16.0f/9.0f, 0.1f, 1000.0f);
    camera->setPosition(QVector3D(0, 0, 40.0f));
    camera->setViewCenter(QVector3D(0, 0, 0));

    // For camera controls
    Qt3DExtras::QOrbitCameraController *camController = new Qt3DExtras::QOrbitCameraController(rootScene);
    camController->setLinearSpeed( 50.0f );
    camController->setLookSpeed( 180.0f );
    camController->setCamera(camera);

    QObject::connect(camera, SIGNAL (viewVectorChanged(const QVector3D)), &view, SLOT(logCameraVector(const QVector3D)));
    QObject::connect(camera, SIGNAL (projectionMatrixChanged(const QMatrix4x4)), &view, SLOT(logCameraMatrix(const QMatrix4x4)));
    QObject::connect(camera, SIGNAL (positionChanged(const QVector3D)), &view, SLOT(positionChanged(const QVector3D)));
    //Run
    view.setRootEntity(rootScene);
    view.resize(900,900);

    FileModel F( RPoint{0,0,0}, "Test", QUrl("file:///C:/Qt/git/s.obj"), rootScene);
    view.show();
    return a.exec();
}

void Main3DWindow::logCameraVector(const QVector3D &vector)
{
    qDebug()<< "viewVectorChanged";
    qDebug()<< vector;

}


void Main3DWindow::logCameraMatrix(const QMatrix4x4 &projectionMatrix)
{
    qDebug()<< "projectionMatrixChanged";
    qDebug()<< projectionMatrix;
}

void Main3DWindow::positionChanged(const QVector3D &position)

{
    qDebug()<< "positionChanged";
    qDebug()<< position;
}
