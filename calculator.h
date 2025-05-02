#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_btnAdd_clicked();

    void on_btnSub_clicked();

    void on_btnMult_clicked();

    void on_btnDiv_clicked();

    void on_btnPow_clicked();

    void on_btnLog_clicked();

    void on_btnLn_clicked();

    void on_btnMod_clicked();

    void on_btnFact_clicked();

private:
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
