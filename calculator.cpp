#include "calculator.h"
#include "./ui_calculator.h"
#include <cmath>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_btnAdd_clicked()
{
    double firstNum = ui->txtFirstNum->text().toDouble();
    double secondNum = ui->txtSecondNum->text().toDouble();
    double result = firstNum + secondNum;
    ui->txtResult->setText(QString::number(result, 'g', 12));
}


void Calculator::on_btnSub_clicked()
{
    double firstNum = ui->txtFirstNum->text().toDouble();
    double secondNum = ui->txtSecondNum->text().toDouble();
    double result = firstNum - secondNum;
    ui->txtResult->setText(QString::number(result, 'g', 12));
}


void Calculator::on_btnMult_clicked()
{
    double firstNum = ui->txtFirstNum->text().toDouble();
    double secondNum = ui->txtSecondNum->text().toDouble();
    double result = firstNum * secondNum;
    ui->txtResult->setText(QString::number(result, 'g', 12));
}


void Calculator::on_btnDiv_clicked()
{
    double firstNum = ui->txtFirstNum->text().toDouble();
    double secondNum = ui->txtSecondNum->text().toDouble();
    if(secondNum == 0){
        ui->txtResult->setText("Undefined");
        return;
    }
    double result = firstNum / secondNum;
    ui->txtResult->setText(QString::number(result, 'g', 12));
}


void Calculator::on_btnPow_clicked()
{
    double firstNum = ui->txtFirstNum->text().toDouble();
    double secondNum = ui->txtSecondNum->text().toDouble();
    double result = std::pow(firstNum, secondNum);
    ui->txtResult->setText(QString::number(result, 'g', 12));
}


void Calculator::on_btnLog_clicked()
{
    ui->txtSecondNum->clear();
    double firstNum = ui->txtFirstNum->text().toDouble();
    if(firstNum <= 0){
        ui->txtResult->setText("Undefined");
        return;
    }
    double result = std::log10(firstNum);
    ui->txtResult->setText(QString::number(result, 'g', 12));
}


void Calculator::on_btnLn_clicked()
{
    ui->txtSecondNum->clear();
    double firstNum = ui->txtFirstNum->text().toDouble();
    if(firstNum <= 0){
        ui->txtResult->setText("Undefined");
        return;
    }
    double result = std::log(firstNum);
    ui->txtResult->setText(QString::number(result, 'g', 12));
}


void Calculator::on_btnMod_clicked()
{
    long long firstNum = ui->txtFirstNum->text().toLongLong();
    long long secondNum = ui->txtSecondNum->text().toLongLong();
    if(secondNum <= 0){
        ui->txtResult->setText("Undefined");
        return;
    }
    long long result = (firstNum < 0) ? ((firstNum % secondNum) + secondNum) % secondNum : firstNum % secondNum;
    ui->txtResult->setText(QString::number(result, 'g', 12));
}


void Calculator::on_btnFact_clicked()
{
    ui->txtSecondNum->clear();
    unsigned long long firstNum = ui->txtFirstNum->text().toULongLong();
    unsigned long long result = 1;
    for(unsigned long long i = 1; i < firstNum + 1; ++i){
        result *= i;
    }
    ui->txtResult->setText(QString::number(result));
}

