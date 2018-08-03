#include "scene.h"
#include "ui_scene.h"

scene::scene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scene)
{
    ui->setupUi(this);
}

scene::~scene()
{
    delete ui;
}
