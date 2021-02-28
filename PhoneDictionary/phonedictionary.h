#ifndef PHONEDICTIONARY_H_
#define PHONEDICTIONARY_H_

#include <iostream>
#include <iomanip>

#include "data_factory.h"

#include <QMainWindow>

#define D_MAX_VIEW_NUMBER (30)

/* definition of menu number */
enum class E_MENU {
    MENU_ADD = 1,
    MENU_VIEW,
    MENU_DELETE,
    MENU_STATIC,
    MENU_HEAP,
    MENU_FILE,
    MENU_DB,
    MENU_END
};

/* definition of flag number */
enum class E_FLAG {
    FLAG_CONTINUE,
    FLAG_NORMAL,
    FLAG_ABNORMAL,
};

QT_BEGIN_NAMESPACE
namespace Ui { class PhoneDictionary; }
QT_END_NAMESPACE

class PhoneDictionary : public QMainWindow
{
    Q_OBJECT

public:
    PhoneDictionary(QWidget *parent = nullptr);
    ~PhoneDictionary();

    std::shared_ptr<DataBase> data;
    int start();

private slots:
    void on_pushButton_update_clicked();
    //void on_pushButton_update_clicked(std::shared_ptr<DataBase> data);
    //void on_view_phonedictionary(std::shared_ptr<DataBase> data);
    //void on_pushButton_delete_clicked(std::shared_ptr<DataBase> data);
    void on_pushButton_delete_clicked();

    void on_pushButton_view_clicked();

private:
    Ui::PhoneDictionary *ui;

    E_MENU getSelectMenu();

    int menuAdd(std::shared_ptr<DataBase> data);
    int menuView(std::shared_ptr<DataBase> data);
    int menuDelete(std::shared_ptr<DataBase> data);
    void outputError(int code);
};
#endif // PHONEDICTIONARY_H_
