#include <QGuiApplication>

#include "main3dwindow.h"


int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);

    Main3DWindow view;;

    view.show();

    return a.exec();
}
