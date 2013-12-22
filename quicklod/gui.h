#ifndef GUI_H
#define GUI_H

#include <QWidget>

namespace Ui {
class gui;
}

class gui : public QWidget
{
    Q_OBJECT

public:
    explicit gui(QWidget *parent = 0);
    ~gui();

private slots:
    void on_slider_1_valueChanged(int value);

    void on_slider_2_valueChanged(int value);

    void on_slider_3_valueChanged(int value);

    void on_slider_4_valueChanged(int value);

    void on_slider_5_valueChanged(int value);

private:
    Ui::gui *ui;
};

#endif // GUI_H
