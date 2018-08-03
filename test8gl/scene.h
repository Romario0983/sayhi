#ifndef SCENE_H
#define SCENE_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QtGui>

namespace Ui {
class Scene;
}

class Scene : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit Scene(QWidget *parent = nullptr);
    ~Scene();

protected:
      void initializeGL();
      void resizeGL(int w, int h);
      void paintGL();

private:
    Ui::Scene *ui;
};

#endif // SCENE_H
