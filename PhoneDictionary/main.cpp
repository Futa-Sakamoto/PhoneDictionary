#include "phonedictionary.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PhoneDictionary window;
    window.show();
    return a.exec();
}
