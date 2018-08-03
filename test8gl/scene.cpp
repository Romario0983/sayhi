#include "scene.h"
#include "ui_scene.h"
#include "GL/gl.h"


Scene::Scene(QWidget *parent) :
    QOpenGLWidget(parent),
    ui(new Ui::Scene)
{
    ui->setupUi(this);
}

Scene::~Scene()
{
    delete ui;
}



void Scene::initializeGL()
{

     glClearColor(1.0, 1.0, 1.0, 1.0);
}

void Scene::resizeGL(int w, int h)
{
}

void Scene::paintGL()

{
    glClear(GL_COLOR_BUFFER_BIT); // чистим буфер


}
