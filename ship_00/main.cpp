#include <QGuiApplication>
#include <Qt3DExtras/Qt3DWindow>

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);
    Qt3DExtras::Qt3DWindow main_3d_window;
    main_3d_window.show();
    return a.exec();
}
