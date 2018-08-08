#include "filemodel.h"
#include <QTransform>
#include <QTorusMesh>
#include <QParameter>
#include <QMaterial>
#include <QEffect>
#include <QRenderPass>
#include <QTechnique>
#include <QGraphicsApiFilter>

void FileModel::onStatusChanged ()
{
    qDebug() << "Status changed:" << sceneFile->status();
    if (sceneFile->status() != Qt3DRender::QSceneLoader::Ready)
        return;
    QVector<Qt3DCore::QEntity *> entities = sceneFile->entities();
    qDebug() << entities[0]->childNodes()[1]->childNodes()[0];


    material = new Qt3DExtras::QPhongMaterial();
    material->setDiffuse(QColor(Qt::red));

    qobject_cast<Qt3DCore::QEntity *>(entities[0]->childNodes()[1]->childNodes()[0])->addComponent(material);
}


FileModel::FileModel(RPoint point, const QString name, const QUrl &filename, Qt3DCore::QEntity *rootEntity, QObject *parent):
    MetroElement (point, name, rootEntity, parent)
{
    //Scene


    sceneFile = new Qt3DRender::QSceneLoader();
    sceneFile->setSource(filename);

    myEntity->addComponent(sceneFile);

    QObject::connect(sceneFile, &Qt3DRender::QSceneLoader::statusChanged, this, &FileModel::onStatusChanged);


}



FileModel::~FileModel()
{
    myEntity->removeComponent(sceneFile);
    myEntity->removeComponent(material);
    delete (sceneFile); ///?????
}
