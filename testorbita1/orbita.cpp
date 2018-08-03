#include "orbita.h"
#include "ui_orbita.h"

Orbita::Orbita(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Orbita)
{
    ui->setupUi(this);
}

Orbita::~Orbita()
{
    delete ui;
}
