#ifndef SCENE_H
#define SCENE_H

#include <QWidget>

namespace Ui {
class scene;
}

class scene : public QWidget
{
    Q_OBJECT

public:
    explicit scene(QWidget *parent = nullptr);
    ~scene();

private:
    Ui::scene *ui;
};

#endif // SCENE_H
