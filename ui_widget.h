/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbAdd;
    QPushButton *pbDelete;
    QPushButton *pbClear;
    QSpacerItem *verticalSpacer;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 248);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbAdd = new QPushButton(Widget);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));

        gridLayout->addWidget(pbAdd, 0, 1, 1, 1);

        pbDelete = new QPushButton(Widget);
        pbDelete->setObjectName(QStringLiteral("pbDelete"));

        gridLayout->addWidget(pbDelete, 1, 1, 1, 1);

        pbClear = new QPushButton(Widget);
        pbClear->setObjectName(QStringLiteral("pbClear"));

        gridLayout->addWidget(pbClear, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 4, 1);


        retranslateUi(Widget);
        QObject::connect(pbClear, SIGNAL(clicked()), listWidget, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pbAdd->setText(QApplication::translate("Widget", "Hinzuf\303\274gen", Q_NULLPTR));
        pbDelete->setText(QApplication::translate("Widget", "Entfernen", Q_NULLPTR));
        pbClear->setText(QApplication::translate("Widget", "Zur\303\274cksetzen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
