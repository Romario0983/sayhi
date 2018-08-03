#ifndef FILEMODEL_H
#define FILEMODEL_H

#include "metroelement.h"
#include <QUrl>

class FileModel : public MetroElement
{
    Q_OBJECT
public:
    FileModel(RPoint point, const QString &name, const QUrl &filename , Qt3DCore::QEntity *rootEntity, QObject *parent = nullptr);

Qt3DCore::QEntity* drawEntity();

};

#endif // FILEMODEL_H
