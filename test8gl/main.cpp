#include "scene.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Scene w;
    w.resize(700,700);
    w.show();
    w.update();

    return a.exec();
}
