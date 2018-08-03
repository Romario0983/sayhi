#include "scene.h"
#include "ui_scene.h"

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
    initializeOpenGLFunctions();

    glClearColor(1, 1, 1 , 1);
}

void Scene::resizeGL(int w, int h)
{


}

void Scene::paintGL()
{

}
