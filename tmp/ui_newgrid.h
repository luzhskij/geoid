/********************************************************************************
** Form generated from reading ui file 'newgrid.ui'
**
** Created: Mon Apr 7 16:16:26 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NEWGRID_H
#define UI_NEWGRID_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

class Ui_NewGridClass
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QRadioButton *radioImport;
    QRadioButton *radioCreate;
    QVBoxLayout *vboxLayout2;
    QLineEdit *importEdit;
    QLineEdit *createEdit;
    QVBoxLayout *vboxLayout3;
    QPushButton *importButton;
    QPushButton *createButton;
    QGroupBox *defineCooBox;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout2;
    QLabel *xLabel;
    QComboBox *xCombo;
    QHBoxLayout *hboxLayout3;
    QLabel *yLabel;
    QComboBox *yCombo;
    QHBoxLayout *hboxLayout4;
    QLabel *zLabel;
    QComboBox *zCombo;
    QSpacerItem *spacerItem;
    QGroupBox *paramBox;
    QGridLayout *gridLayout;
    QLabel *emptyLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *minXEdit;
    QLineEdit *maxXEdit;
    QLineEdit *xSizeEdit;
    QSpinBox *numXSpin;
    QLabel *label_2;
    QLineEdit *minYEdit;
    QLineEdit *maxYEdit;
    QLineEdit *ySizeEdit;
    QSpinBox *numYSpin;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *canselButton;

    void setupUi(QDialog *NewGridClass)
    {
    if (NewGridClass->objectName().isEmpty())
        NewGridClass->setObjectName(QString::fromUtf8("NewGridClass"));
    NewGridClass->resize(410, 321);
    vboxLayout = new QVBoxLayout(NewGridClass);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    radioImport = new QRadioButton(NewGridClass);
    radioImport->setObjectName(QString::fromUtf8("radioImport"));
    radioImport->setChecked(true);

    vboxLayout1->addWidget(radioImport);

    radioCreate = new QRadioButton(NewGridClass);
    radioCreate->setObjectName(QString::fromUtf8("radioCreate"));

    vboxLayout1->addWidget(radioCreate);


    hboxLayout->addLayout(vboxLayout1);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(0);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    importEdit = new QLineEdit(NewGridClass);
    importEdit->setObjectName(QString::fromUtf8("importEdit"));
    importEdit->setMinimumSize(QSize(150, 0));
    importEdit->setReadOnly(true);

    vboxLayout2->addWidget(importEdit);

    createEdit = new QLineEdit(NewGridClass);
    createEdit->setObjectName(QString::fromUtf8("createEdit"));
    createEdit->setEnabled(false);
    createEdit->setMinimumSize(QSize(150, 0));
    createEdit->setReadOnly(true);

    vboxLayout2->addWidget(createEdit);


    hboxLayout->addLayout(vboxLayout2);

    vboxLayout3 = new QVBoxLayout();
    vboxLayout3->setSpacing(6);
    vboxLayout3->setMargin(0);
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    importButton = new QPushButton(NewGridClass);
    importButton->setObjectName(QString::fromUtf8("importButton"));

    vboxLayout3->addWidget(importButton);

    createButton = new QPushButton(NewGridClass);
    createButton->setObjectName(QString::fromUtf8("createButton"));
    createButton->setEnabled(false);

    vboxLayout3->addWidget(createButton);


    hboxLayout->addLayout(vboxLayout3);


    vboxLayout->addLayout(hboxLayout);

    defineCooBox = new QGroupBox(NewGridClass);
    defineCooBox->setObjectName(QString::fromUtf8("defineCooBox"));
    defineCooBox->setEnabled(false);
    hboxLayout1 = new QHBoxLayout(defineCooBox);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(9);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    vboxLayout4 = new QVBoxLayout();
    vboxLayout4->setSpacing(6);
    vboxLayout4->setMargin(0);
    vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    xLabel = new QLabel(defineCooBox);
    xLabel->setObjectName(QString::fromUtf8("xLabel"));

    hboxLayout2->addWidget(xLabel);

    xCombo = new QComboBox(defineCooBox);
    xCombo->setObjectName(QString::fromUtf8("xCombo"));
    xCombo->setMinimumSize(QSize(150, 0));

    hboxLayout2->addWidget(xCombo);


    vboxLayout4->addLayout(hboxLayout2);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(0);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    yLabel = new QLabel(defineCooBox);
    yLabel->setObjectName(QString::fromUtf8("yLabel"));

    hboxLayout3->addWidget(yLabel);

    yCombo = new QComboBox(defineCooBox);
    yCombo->setObjectName(QString::fromUtf8("yCombo"));
    yCombo->setMinimumSize(QSize(150, 0));

    hboxLayout3->addWidget(yCombo);


    vboxLayout4->addLayout(hboxLayout3);

    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setSpacing(6);
    hboxLayout4->setMargin(0);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    zLabel = new QLabel(defineCooBox);
    zLabel->setObjectName(QString::fromUtf8("zLabel"));

    hboxLayout4->addWidget(zLabel);

    zCombo = new QComboBox(defineCooBox);
    zCombo->setObjectName(QString::fromUtf8("zCombo"));
    zCombo->setMinimumSize(QSize(150, 0));

    hboxLayout4->addWidget(zCombo);


    vboxLayout4->addLayout(hboxLayout4);


    hboxLayout1->addLayout(vboxLayout4);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem);


    vboxLayout->addWidget(defineCooBox);

    paramBox = new QGroupBox(NewGridClass);
    paramBox->setObjectName(QString::fromUtf8("paramBox"));
    paramBox->setEnabled(false);
    gridLayout = new QGridLayout(paramBox);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    emptyLabel = new QLabel(paramBox);
    emptyLabel->setObjectName(QString::fromUtf8("emptyLabel"));

    gridLayout->addWidget(emptyLabel, 0, 0, 1, 1);

    label_3 = new QLabel(paramBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setAlignment(Qt::AlignCenter|Qt::AlignHCenter|Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout->addWidget(label_3, 0, 1, 1, 1);

    label_4 = new QLabel(paramBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setAlignment(Qt::AlignCenter|Qt::AlignHCenter|Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout->addWidget(label_4, 0, 2, 1, 1);

    label_5 = new QLabel(paramBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setAlignment(Qt::AlignCenter|Qt::AlignHCenter|Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout->addWidget(label_5, 0, 3, 1, 1);

    label_6 = new QLabel(paramBox);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout->addWidget(label_6, 0, 4, 1, 1);

    label = new QLabel(paramBox);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 1, 0, 1, 1);

    minXEdit = new QLineEdit(paramBox);
    minXEdit->setObjectName(QString::fromUtf8("minXEdit"));
    minXEdit->setMinimumSize(QSize(81, 0));

    gridLayout->addWidget(minXEdit, 1, 1, 1, 1);

    maxXEdit = new QLineEdit(paramBox);
    maxXEdit->setObjectName(QString::fromUtf8("maxXEdit"));
    maxXEdit->setMinimumSize(QSize(81, 0));

    gridLayout->addWidget(maxXEdit, 1, 2, 1, 1);

    xSizeEdit = new QLineEdit(paramBox);
    xSizeEdit->setObjectName(QString::fromUtf8("xSizeEdit"));
    xSizeEdit->setMinimumSize(QSize(81, 0));

    gridLayout->addWidget(xSizeEdit, 1, 3, 1, 1);

    numXSpin = new QSpinBox(paramBox);
    numXSpin->setObjectName(QString::fromUtf8("numXSpin"));
    numXSpin->setMinimumSize(QSize(44, 0));
    numXSpin->setMaximum(999);

    gridLayout->addWidget(numXSpin, 1, 4, 1, 1);

    label_2 = new QLabel(paramBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 2, 0, 1, 1);

    minYEdit = new QLineEdit(paramBox);
    minYEdit->setObjectName(QString::fromUtf8("minYEdit"));
    minYEdit->setMinimumSize(QSize(81, 0));

    gridLayout->addWidget(minYEdit, 2, 1, 1, 1);

    maxYEdit = new QLineEdit(paramBox);
    maxYEdit->setObjectName(QString::fromUtf8("maxYEdit"));
    maxYEdit->setMinimumSize(QSize(81, 0));

    gridLayout->addWidget(maxYEdit, 2, 2, 1, 1);

    ySizeEdit = new QLineEdit(paramBox);
    ySizeEdit->setObjectName(QString::fromUtf8("ySizeEdit"));
    ySizeEdit->setMinimumSize(QSize(81, 0));

    gridLayout->addWidget(ySizeEdit, 2, 3, 1, 1);

    numYSpin = new QSpinBox(paramBox);
    numYSpin->setObjectName(QString::fromUtf8("numYSpin"));
    numYSpin->setMinimumSize(QSize(44, 0));
    numYSpin->setMaximum(999);

    gridLayout->addWidget(numYSpin, 2, 4, 1, 1);


    vboxLayout->addWidget(paramBox);

    hboxLayout5 = new QHBoxLayout();
    hboxLayout5->setSpacing(6);
    hboxLayout5->setMargin(0);
    hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout5->addItem(spacerItem1);

    okButton = new QPushButton(NewGridClass);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setEnabled(false);

    hboxLayout5->addWidget(okButton);

    canselButton = new QPushButton(NewGridClass);
    canselButton->setObjectName(QString::fromUtf8("canselButton"));

    hboxLayout5->addWidget(canselButton);


    vboxLayout->addLayout(hboxLayout5);

    QWidget::setTabOrder(radioImport, importEdit);
    QWidget::setTabOrder(importEdit, importButton);
    QWidget::setTabOrder(importButton, radioCreate);
    QWidget::setTabOrder(radioCreate, createEdit);
    QWidget::setTabOrder(createEdit, createButton);
    QWidget::setTabOrder(createButton, xCombo);
    QWidget::setTabOrder(xCombo, yCombo);
    QWidget::setTabOrder(yCombo, zCombo);
    QWidget::setTabOrder(zCombo, minXEdit);
    QWidget::setTabOrder(minXEdit, maxXEdit);
    QWidget::setTabOrder(maxXEdit, xSizeEdit);
    QWidget::setTabOrder(xSizeEdit, numXSpin);
    QWidget::setTabOrder(numXSpin, minYEdit);
    QWidget::setTabOrder(minYEdit, maxYEdit);
    QWidget::setTabOrder(maxYEdit, ySizeEdit);
    QWidget::setTabOrder(ySizeEdit, numYSpin);
    QWidget::setTabOrder(numYSpin, okButton);
    QWidget::setTabOrder(okButton, canselButton);

    retranslateUi(NewGridClass);
    QObject::connect(canselButton, SIGNAL(clicked()), NewGridClass, SLOT(reject()));
    QObject::connect(okButton, SIGNAL(clicked()), NewGridClass, SLOT(accept()));

    QMetaObject::connectSlotsByName(NewGridClass);
    } // setupUi

    void retranslateUi(QDialog *NewGridClass)
    {
    NewGridClass->setWindowTitle(QApplication::translate("NewGridClass", "New grid", 0, QApplication::UnicodeUTF8));
    radioImport->setText(QApplication::translate("NewGridClass", "Import grid", 0, QApplication::UnicodeUTF8));
    radioCreate->setText(QApplication::translate("NewGridClass", "Create grid", 0, QApplication::UnicodeUTF8));
    importEdit->setText(QString());
    importButton->setText(QApplication::translate("NewGridClass", "Browse...", 0, QApplication::UnicodeUTF8));
    createButton->setText(QApplication::translate("NewGridClass", "Browse...", 0, QApplication::UnicodeUTF8));
    defineCooBox->setTitle(QApplication::translate("NewGridClass", "Data columns", 0, QApplication::UnicodeUTF8));
    xLabel->setText(QApplication::translate("NewGridClass", "X:", 0, QApplication::UnicodeUTF8));
    yLabel->setText(QApplication::translate("NewGridClass", "Y:", 0, QApplication::UnicodeUTF8));
    zLabel->setText(QApplication::translate("NewGridClass", "Z:", 0, QApplication::UnicodeUTF8));
    paramBox->setTitle(QApplication::translate("NewGridClass", "Grid line geometry", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("NewGridClass", "Minimum", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("NewGridClass", "Maximum", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("NewGridClass", "Spacing", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("NewGridClass", "# of nodes", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("NewGridClass", "X direction:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("NewGridClass", "Y direction:", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("NewGridClass", "OK", 0, QApplication::UnicodeUTF8));
    canselButton->setText(QApplication::translate("NewGridClass", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(NewGridClass);
    } // retranslateUi

};

namespace Ui {
    class NewGridClass: public Ui_NewGridClass {};
} // namespace Ui

#endif // UI_NEWGRID_H
