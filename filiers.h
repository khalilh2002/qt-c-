#ifndef FILIERS_H
#define FILIERS_H

#include <QDialog>

namespace Ui {
class filiers;
}

class filiers : public QDialog
{
    Q_OBJECT

public:
    explicit filiers(QWidget *parent = nullptr);
    ~filiers();

private:
    Ui::filiers *ui;
};

#endif // FILIERS_H
