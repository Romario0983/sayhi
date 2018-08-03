#include "main_3d_window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    main_3d_window w;
    w.show();

    return a.exec();
}
