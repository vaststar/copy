#ifndef UPDATEWIDGET_H
#define UPDATEWIDGET_H

#include <QWidget>

namespace Ui {
class UpdateWidget;
}

class UpdateWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateWidget(QWidget *parent = 0);
    ~UpdateWidget();
private slots:
    void startMove();

    void copyFinish();
private:
    void InitWidget();
private:
    Ui::UpdateWidget *ui;
};

#endif // UPDATEWIDGET_H
