#include <QGLWidget>
#include <QOpenGLFunctions>
#include <GL/gl.h>

namespace Ui {
class Widget;
}

class Widget : public QGLWidget
{
    Q_OBJECT

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

public:
    Widget(QWidget* parent = 0);
};


