/********************************************************************************
** Form generated from reading UI file 'endwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDWINDOW2_H
#define UI_ENDWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_endwindow2
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *endwindow2)
    {
        if (endwindow2->objectName().isEmpty())
            endwindow2->setObjectName(QStringLiteral("endwindow2"));
        endwindow2->resize(1024, 768);
        endwindow2->setMinimumSize(QSize(1024, 768));
        graphicsView = new QGraphicsView(endwindow2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-10, -10, 1024, 768));
        graphicsView->setMinimumSize(QSize(1024, 768));
        graphicsView->setFocusPolicy(Qt::NoFocus);

        retranslateUi(endwindow2);

        QMetaObject::connectSlotsByName(endwindow2);
    } // setupUi

    void retranslateUi(QDialog *endwindow2)
    {
        endwindow2->setWindowTitle(QApplication::translate("endwindow2", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class endwindow2: public Ui_endwindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDWINDOW2_H
