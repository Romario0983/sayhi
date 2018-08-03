#include "widget.h"
#include <GL/gl.h>

Widget::Widget(QWidget* parent) : QGLWidget(parent)
{
}
void Widget::initializeGL()
{
     qglClearColor(Qt::green);
}

void Widget::resizeGL(int w, int h)
{
}

void Widget::paintGL()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}
