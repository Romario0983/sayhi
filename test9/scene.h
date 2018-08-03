#ifndef SCENE_H
#define SCENE_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>


namespace Ui {
class Scene;
}

class Scene : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit Scene(QWidget *parent = nullptr);
    ~Scene();

private:
    Ui::Scene *ui;

void initializeGL() override;
void resizeGL(int w, int h) override;
void paintGL() override;

};

#endif // SCENE_H
