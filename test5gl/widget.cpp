#include "widget.h"


Widget::Widget(QWidget* parent) : QGLWidget(parent)
{
}

void Widget::initializeGL()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glEnable(GL_DEPTH_TEST);
}

void Widget::resizeGL(int w, int h)
{
       glMatrixMode(GL_PROJECTION);

       glLoadIdentity();

       glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

       glViewport(0, 0, (GLint)w, (GLint)h);
}

void Widget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(0.25, 0.87, 0.81);
        glBegin(GL_TRIANGLES);

        glVertex2f(0.0, 0.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, 0.0);

        glEnd();
}
