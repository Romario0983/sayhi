#ifndef FILEMODEL_H
#define FILEMODEL_H

#include "metroelement.h"
#include <QUrl>
#include <QSceneLoader>
#include <QMaterial>
#include <QPhongMaterial>
#include <Qt3DRender/QMesh>
#include <QPerVertexColorMaterial>
#include <QMaterial>

class FileModel : public MetroElement
{
    Q_OBJECT
public:
    FileModel(RPoint point, const QString name, const QUrl &filename , Qt3DCore::QEntity *rootEntity, QObject *parent = nullptr);
    ~FileModel();

   void onStatusChanged ();

private:
    Qt3DRender::QSceneLoader *sceneFile;
    Qt3DExtras::QPhongMaterial *material;

};




#endif // FILEMODEL_H
