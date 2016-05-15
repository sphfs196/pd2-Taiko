/********************************************************************************
** Form generated from reading UI file 'endwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDWINDOW_H
#define UI_ENDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_endwindow
{
public:
    QLabel *label;

    void setupUi(QDialog *endwindow)
    {
        if (endwindow->objectName().isEmpty())
            endwindow->setObjectName(QStringLiteral("endwindow"));
        endwindow->resize(1024, 768);
        label = new QLabel(endwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-240, -80, 1024, 768));
        label->setPixmap(QPixmap(QString::fromUtf8("../game_bg1.gif")));

        retranslateUi(endwindow);

        QMetaObject::connectSlotsByName(endwindow);
    } // setupUi

    void retranslateUi(QDialog *endwindow)
    {
        endwindow->setWindowTitle(QApplication::translate("endwindow", "Dialog", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class endwindow: public Ui_endwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDWINDOW_H
