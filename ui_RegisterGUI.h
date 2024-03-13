/********************************************************************************
** Form generated from reading UI file 'RegisterGUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERGUI_H
#define UI_REGISTERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterGUIClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *btnReset;
    QPushButton *btnAddItem;
    QListWidget *listRegisterWidget;
    QPushButton *btnDelete;
    QCheckBox *repeat;
    QCheckBox *taxable;
    QLineEdit *lineEditPrice;
    QLabel *labelPrice;
    QLineEdit *lineEditDescription;
    QLabel *labelDescription;
    QLabel *labelSubTotal;
    QLabel *labelTax;
    QLabel *labelTotal;
    QLabel *labelTotalPrint;
    QLabel *labelTaxesPrint;
    QLabel *labelSubtotalPrint;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *RegisterGUIClass)
    {
        if (RegisterGUIClass->objectName().isEmpty())
            RegisterGUIClass->setObjectName("RegisterGUIClass");
        RegisterGUIClass->setWindowModality(Qt::ApplicationModal);
        RegisterGUIClass->setEnabled(true);
        RegisterGUIClass->resize(317, 269);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegisterGUIClass->sizePolicy().hasHeightForWidth());
        RegisterGUIClass->setSizePolicy(sizePolicy);
        RegisterGUIClass->setMinimumSize(QSize(0, 0));
        RegisterGUIClass->setSizeIncrement(QSize(0, 0));
        centralWidget = new QWidget(RegisterGUIClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setSizeIncrement(QSize(1, 2));
        centralWidget->setContextMenuPolicy(Qt::NoContextMenu);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        verticalSpacer = new QSpacerItem(128, 13, QSizePolicy::Minimum, QSizePolicy::Ignored);

        gridLayout->addItem(verticalSpacer, 6, 4, 1, 5);

        btnReset = new QPushButton(centralWidget);
        btnReset->setObjectName("btnReset");
        sizePolicy.setHeightForWidth(btnReset->sizePolicy().hasHeightForWidth());
        btnReset->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        btnReset->setFont(font);

        gridLayout->addWidget(btnReset, 9, 2, 1, 2);

        btnAddItem = new QPushButton(centralWidget);
        btnAddItem->setObjectName("btnAddItem");
        sizePolicy.setHeightForWidth(btnAddItem->sizePolicy().hasHeightForWidth());
        btnAddItem->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnAddItem, 5, 4, 1, 5);

        listRegisterWidget = new QListWidget(centralWidget);
        listRegisterWidget->setObjectName("listRegisterWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listRegisterWidget->sizePolicy().hasHeightForWidth());
        listRegisterWidget->setSizePolicy(sizePolicy2);
        listRegisterWidget->setFrameShape(QFrame::Box);
        listRegisterWidget->setFrameShadow(QFrame::Plain);
        listRegisterWidget->setLineWidth(2);
        listRegisterWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        listRegisterWidget->setSelectionRectVisible(false);

        gridLayout->addWidget(listRegisterWidget, 0, 0, 9, 4);

        btnDelete = new QPushButton(centralWidget);
        btnDelete->setObjectName("btnDelete");
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnDelete, 9, 0, 1, 2);

        repeat = new QCheckBox(centralWidget);
        repeat->setObjectName("repeat");

        gridLayout->addWidget(repeat, 4, 6, 1, 3);

        taxable = new QCheckBox(centralWidget);
        taxable->setObjectName("taxable");
        sizePolicy.setHeightForWidth(taxable->sizePolicy().hasHeightForWidth());
        taxable->setSizePolicy(sizePolicy);

        gridLayout->addWidget(taxable, 4, 4, 1, 2);

        lineEditPrice = new QLineEdit(centralWidget);
        lineEditPrice->setObjectName("lineEditPrice");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditPrice->sizePolicy().hasHeightForWidth());
        lineEditPrice->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(lineEditPrice, 3, 4, 1, 5);

        labelPrice = new QLabel(centralWidget);
        labelPrice->setObjectName("labelPrice");
        sizePolicy3.setHeightForWidth(labelPrice->sizePolicy().hasHeightForWidth());
        labelPrice->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(labelPrice, 2, 4, 1, 5);

        lineEditDescription = new QLineEdit(centralWidget);
        lineEditDescription->setObjectName("lineEditDescription");
        sizePolicy3.setHeightForWidth(lineEditDescription->sizePolicy().hasHeightForWidth());
        lineEditDescription->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(lineEditDescription, 1, 4, 1, 5);

        labelDescription = new QLabel(centralWidget);
        labelDescription->setObjectName("labelDescription");
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelDescription->sizePolicy().hasHeightForWidth());
        labelDescription->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(labelDescription, 0, 4, 1, 5);

        labelSubTotal = new QLabel(centralWidget);
        labelSubTotal->setObjectName("labelSubTotal");
        sizePolicy.setHeightForWidth(labelSubTotal->sizePolicy().hasHeightForWidth());
        labelSubTotal->setSizePolicy(sizePolicy);
        labelSubTotal->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelSubTotal, 7, 4, 1, 2);

        labelTax = new QLabel(centralWidget);
        labelTax->setObjectName("labelTax");
        sizePolicy.setHeightForWidth(labelTax->sizePolicy().hasHeightForWidth());
        labelTax->setSizePolicy(sizePolicy);
        labelTax->setLayoutDirection(Qt::LeftToRight);
        labelTax->setAutoFillBackground(false);
        labelTax->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelTax, 8, 4, 1, 2);

        labelTotal = new QLabel(centralWidget);
        labelTotal->setObjectName("labelTotal");
        sizePolicy.setHeightForWidth(labelTotal->sizePolicy().hasHeightForWidth());
        labelTotal->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        labelTotal->setFont(font1);
        labelTotal->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelTotal, 9, 4, 1, 2);

        labelTotalPrint = new QLabel(centralWidget);
        labelTotalPrint->setObjectName("labelTotalPrint");
        labelTotalPrint->setFont(font1);

        gridLayout->addWidget(labelTotalPrint, 9, 6, 1, 3);

        labelTaxesPrint = new QLabel(centralWidget);
        labelTaxesPrint->setObjectName("labelTaxesPrint");

        gridLayout->addWidget(labelTaxesPrint, 8, 6, 1, 3);

        labelSubtotalPrint = new QLabel(centralWidget);
        labelSubtotalPrint->setObjectName("labelSubtotalPrint");
        labelSubtotalPrint->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(labelSubtotalPrint, 7, 6, 1, 3);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(4, 1);
        gridLayout->setColumnStretch(5, 1);
        gridLayout->setColumnStretch(6, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        RegisterGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RegisterGUIClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 317, 38));
        RegisterGUIClass->setMenuBar(menuBar);

        retranslateUi(RegisterGUIClass);

        QMetaObject::connectSlotsByName(RegisterGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterGUIClass)
    {
        RegisterGUIClass->setWindowTitle(QCoreApplication::translate("RegisterGUIClass", "RegisterGUI", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterGUIClass", "Reset", nullptr));
        btnAddItem->setText(QCoreApplication::translate("RegisterGUIClass", "Add Item", nullptr));
        btnDelete->setText(QCoreApplication::translate("RegisterGUIClass", "Delete", nullptr));
        repeat->setText(QCoreApplication::translate("RegisterGUIClass", "Repeat", nullptr));
        taxable->setText(QCoreApplication::translate("RegisterGUIClass", "Taxable", nullptr));
        labelPrice->setText(QCoreApplication::translate("RegisterGUIClass", "Item's Price:", nullptr));
        labelDescription->setText(QCoreApplication::translate("RegisterGUIClass", "Item's Description:", nullptr));
        labelSubTotal->setText(QCoreApplication::translate("RegisterGUIClass", "Subtotal : ", nullptr));
        labelTax->setText(QCoreApplication::translate("RegisterGUIClass", "Tax :", nullptr));
        labelTotal->setText(QCoreApplication::translate("RegisterGUIClass", "Total :", nullptr));
        labelTotalPrint->setText(QString());
        labelTaxesPrint->setText(QString());
        labelSubtotalPrint->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegisterGUIClass: public Ui_RegisterGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERGUI_H
