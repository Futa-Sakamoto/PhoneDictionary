#include "phonedictionary.h"
#include "ui_phonedictionary.h"

PhoneDictionary::PhoneDictionary(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PhoneDictionary)
{
    ui->setupUi(this);

}

PhoneDictionary::~PhoneDictionary()
{
    delete ui;
}

void PhoneDictionary::on_pushButton_update_clicked()
{
    std::shared_ptr<DataBase> data = DataFactory::create(E_TYPE::TYPE_STATIC);

    /* Add new information*/
    S_DATA temp = {};

    temp.mail = (ui->textEdit_mail->toPlainText()).toUtf8().constData();
    temp.memo = (ui->textEdit_memo->toPlainText()).toUtf8().constData();
    temp.name = (ui->textEdit_name->toPlainText()).toUtf8().constData();

    data->addData(temp);
}

void PhoneDictionary::on_pushButton_delete_clicked()
{
    return;
}

void PhoneDictionary::on_pushButton_view_clicked()
{
    int i = 0;
    int ret = D_ERROR_NONE;
    S_DATA temp[D_MAX_VIEW_NUMBER];
    std::shared_ptr<DataBase> data = DataFactory::create(E_TYPE::TYPE_STATIC);

    if (data->isDataEmpty()) {
        return;
    }
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(D_MAX_VIEW_NUMBER);

    ret = data->getData(D_MAX_VIEW_NUMBER, temp);
    for (i = 0; i < D_MAX_DATA_NUMBER; i++) {
        if (0 == (temp + i)-> id) {
            continue;
        }
        //ui->tableWidget->setItem(i, 0, new QTableWidgetItem(""));
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString((temp + i) -> name)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString((temp + i) -> mail)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString((temp + i) -> memo)));
    }

    return;
}
