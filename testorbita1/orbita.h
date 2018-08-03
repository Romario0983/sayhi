#ifndef ORBITA_H
#define ORBITA_H

#include <QWidget>

namespace Ui {
class Orbita;
}

class Orbita : public QWidget
{
    Q_OBJECT

public:
    explicit Orbita(QWidget *parent = nullptr);
    ~Orbita();

private:
    Ui::Orbita *ui;
};

#endif // ORBITA_H
