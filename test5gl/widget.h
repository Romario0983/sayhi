#include <QGLWidget>

class Widget : public QGLWidget
{



  protected:
     void initializeGL();
     void resizeGL(int w, int h);
     void paintGL();

  public:
     Widget(QWidget* parent = 0);

};


