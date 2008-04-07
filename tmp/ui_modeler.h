/********************************************************************************
** Form generated from reading ui file 'modeler.ui'
**
** Created: Mon Apr 7 16:16:26 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MODELER_H
#define UI_MODELER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_ModelerClass
{
public:
    QAction *newGridAction;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *actionAdd_wells;
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QTreeView *objectList;
    QVBoxLayout *vboxLayout2;
    QLabel *label;
    QComboBox *zScaleBox;
    QSpacerItem *spacerItem;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_2;
    QWidget *tab;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ModelerClass)
    {
    if (ModelerClass->objectName().isEmpty())
        ModelerClass->setObjectName(QString::fromUtf8("ModelerClass"));
    ModelerClass->resize(732, 604);
    newGridAction = new QAction(ModelerClass);
    newGridAction->setObjectName(QString::fromUtf8("newGridAction"));
    action_2 = new QAction(ModelerClass);
    action_2->setObjectName(QString::fromUtf8("action_2"));
    action_3 = new QAction(ModelerClass);
    action_3->setObjectName(QString::fromUtf8("action_3"));
    action_4 = new QAction(ModelerClass);
    action_4->setObjectName(QString::fromUtf8("action_4"));
    action_5 = new QAction(ModelerClass);
    action_5->setObjectName(QString::fromUtf8("action_5"));
    action_6 = new QAction(ModelerClass);
    action_6->setObjectName(QString::fromUtf8("action_6"));
    action_7 = new QAction(ModelerClass);
    action_7->setObjectName(QString::fromUtf8("action_7"));
    action_8 = new QAction(ModelerClass);
    action_8->setObjectName(QString::fromUtf8("action_8"));
    actionAdd_wells = new QAction(ModelerClass);
    actionAdd_wells->setObjectName(QString::fromUtf8("actionAdd_wells"));
    centralWidget = new QWidget(ModelerClass);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    vboxLayout = new QVBoxLayout(centralWidget);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(11);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(9, 9, 9, 9);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setSpacing(6);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    vboxLayout1->setContentsMargins(0, 0, 0, 0);
    objectList = new QTreeView(centralWidget);
    objectList->setObjectName(QString::fromUtf8("objectList"));
    objectList->setMinimumSize(QSize(199, 0));
    objectList->setMaximumSize(QSize(199, 300));

    vboxLayout1->addWidget(objectList);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setSpacing(6);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    vboxLayout2->setContentsMargins(0, 0, 0, 0);
    label = new QLabel(centralWidget);
    label->setObjectName(QString::fromUtf8("label"));

    vboxLayout2->addWidget(label);

    zScaleBox = new QComboBox(centralWidget);
    zScaleBox->setObjectName(QString::fromUtf8("zScaleBox"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(zScaleBox->sizePolicy().hasHeightForWidth());
    zScaleBox->setSizePolicy(sizePolicy);
    zScaleBox->setMinimumSize(QSize(130, 0));

    vboxLayout2->addWidget(zScaleBox);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout2->addItem(spacerItem);


    vboxLayout1->addLayout(vboxLayout2);


    hboxLayout->addLayout(vboxLayout1);

    tabWidget = new QTabWidget(centralWidget);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setMinimumSize(QSize(270, 0));
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    label_2 = new QLabel(tab_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 10, 172, 20));
    tabWidget->addTab(tab_2, QString());
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    tabWidget->addTab(tab, QString());

    hboxLayout->addWidget(tabWidget);


    vboxLayout->addLayout(hboxLayout);

    ModelerClass->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(ModelerClass);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 732, 31));
    menu = new QMenu(menuBar);
    menu->setObjectName(QString::fromUtf8("menu"));
    menu_2 = new QMenu(menuBar);
    menu_2->setObjectName(QString::fromUtf8("menu_2"));
    menu_3 = new QMenu(menuBar);
    menu_3->setObjectName(QString::fromUtf8("menu_3"));
    ModelerClass->setMenuBar(menuBar);
    mainToolBar = new QToolBar(ModelerClass);
    mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
    mainToolBar->setOrientation(Qt::Horizontal);
    ModelerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
    statusBar = new QStatusBar(ModelerClass);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    ModelerClass->setStatusBar(statusBar);

    menuBar->addAction(menu->menuAction());
    menuBar->addAction(menu_2->menuAction());
    menuBar->addAction(menu_3->menuAction());
    menu->addAction(action_2);
    menu->addSeparator();
    menu->addAction(action_3);
    menu->addAction(action_4);
    menu->addAction(action_5);
    menu->addSeparator();
    menu->addAction(action_6);
    menu_2->addAction(newGridAction);
    menu_2->addAction(actionAdd_wells);
    menu_3->addAction(action_7);
    menu_3->addSeparator();
    menu_3->addAction(action_8);

    retranslateUi(ModelerClass);

    tabWidget->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(ModelerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModelerClass)
    {
    ModelerClass->setWindowTitle(QApplication::translate("ModelerClass", "Modeler", 0, QApplication::UnicodeUTF8));
    newGridAction->setText(QApplication::translate("ModelerClass", "Create grid", 0, QApplication::UnicodeUTF8));
    action_2->setText(QApplication::translate("ModelerClass", "New", 0, QApplication::UnicodeUTF8));
    action_3->setText(QApplication::translate("ModelerClass", "Open", 0, QApplication::UnicodeUTF8));
    action_4->setText(QApplication::translate("ModelerClass", "Save", 0, QApplication::UnicodeUTF8));
    action_5->setText(QApplication::translate("ModelerClass", "Save As...", 0, QApplication::UnicodeUTF8));
    action_6->setText(QApplication::translate("ModelerClass", "Exit", 0, QApplication::UnicodeUTF8));
    action_7->setText(QApplication::translate("ModelerClass", "Modeler Help", 0, QApplication::UnicodeUTF8));
    action_8->setText(QApplication::translate("ModelerClass", "About", 0, QApplication::UnicodeUTF8));
    actionAdd_wells->setText(QApplication::translate("ModelerClass", "Add wells", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("ModelerClass", "Vertical Scale", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("ModelerClass", "Currently not implemented", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ModelerClass", "2D window", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ModelerClass", "3D window", 0, QApplication::UnicodeUTF8));
    menu->setTitle(QApplication::translate("ModelerClass", "File", 0, QApplication::UnicodeUTF8));
    menu_2->setTitle(QApplication::translate("ModelerClass", "Actions", 0, QApplication::UnicodeUTF8));
    menu_3->setTitle(QApplication::translate("ModelerClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModelerClass: public Ui_ModelerClass {};
} // namespace Ui

#endif // UI_MODELER_H
