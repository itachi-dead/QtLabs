/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDestionation;
    QAction *actionDestination_and_time;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_central;
    QVBoxLayout *verticalLayout_left;
    QTableWidget *leftTable;
    QHBoxLayout *horizontalLayout_left;
    QPushButton *leftAdd;
    QPushButton *leftDelete;
    QPushButton *leftMove;
    QVBoxLayout *verticalLayout_right;
    QTableWidget *rightTable;
    QHBoxLayout *horizontalLayout_right;
    QPushButton *rightMove;
    QPushButton *rightDelete;
    QPushButton *rightAdd;
    QMenuBar *menuBar;
    QMenu *menuPrint;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(609, 454);
        actionDestionation = new QAction(MainWindow);
        actionDestionation->setObjectName(QString::fromUtf8("actionDestionation"));
        actionDestination_and_time = new QAction(MainWindow);
        actionDestination_and_time->setObjectName(QString::fromUtf8("actionDestination_and_time"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_21 = new QVBoxLayout(centralWidget);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_central = new QHBoxLayout();
        horizontalLayout_central->setSpacing(6);
        horizontalLayout_central->setObjectName(QString::fromUtf8("horizontalLayout_central"));
        verticalLayout_left = new QVBoxLayout();
        verticalLayout_left->setSpacing(6);
        verticalLayout_left->setObjectName(QString::fromUtf8("verticalLayout_left"));
        leftTable = new QTableWidget(centralWidget);
        if (leftTable->columnCount() < 5)
            leftTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        leftTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        leftTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        leftTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        leftTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        leftTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        leftTable->setObjectName(QString::fromUtf8("leftTable"));

        verticalLayout_left->addWidget(leftTable);

        horizontalLayout_left = new QHBoxLayout();
        horizontalLayout_left->setSpacing(6);
        horizontalLayout_left->setObjectName(QString::fromUtf8("horizontalLayout_left"));
        leftAdd = new QPushButton(centralWidget);
        leftAdd->setObjectName(QString::fromUtf8("leftAdd"));

        horizontalLayout_left->addWidget(leftAdd);

        leftDelete = new QPushButton(centralWidget);
        leftDelete->setObjectName(QString::fromUtf8("leftDelete"));

        horizontalLayout_left->addWidget(leftDelete);

        leftMove = new QPushButton(centralWidget);
        leftMove->setObjectName(QString::fromUtf8("leftMove"));

        horizontalLayout_left->addWidget(leftMove);


        verticalLayout_left->addLayout(horizontalLayout_left);


        horizontalLayout_central->addLayout(verticalLayout_left);

        verticalLayout_right = new QVBoxLayout();
        verticalLayout_right->setSpacing(6);
        verticalLayout_right->setObjectName(QString::fromUtf8("verticalLayout_right"));
        rightTable = new QTableWidget(centralWidget);
        if (rightTable->columnCount() < 5)
            rightTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        rightTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        rightTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        rightTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        rightTable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        rightTable->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        rightTable->setObjectName(QString::fromUtf8("rightTable"));

        verticalLayout_right->addWidget(rightTable);

        horizontalLayout_right = new QHBoxLayout();
        horizontalLayout_right->setSpacing(6);
        horizontalLayout_right->setObjectName(QString::fromUtf8("horizontalLayout_right"));
        rightMove = new QPushButton(centralWidget);
        rightMove->setObjectName(QString::fromUtf8("rightMove"));

        horizontalLayout_right->addWidget(rightMove);

        rightDelete = new QPushButton(centralWidget);
        rightDelete->setObjectName(QString::fromUtf8("rightDelete"));

        horizontalLayout_right->addWidget(rightDelete);

        rightAdd = new QPushButton(centralWidget);
        rightAdd->setObjectName(QString::fromUtf8("rightAdd"));

        horizontalLayout_right->addWidget(rightAdd);


        verticalLayout_right->addLayout(horizontalLayout_right);


        horizontalLayout_central->addLayout(verticalLayout_right);


        verticalLayout_21->addLayout(horizontalLayout_central);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 609, 25));
        menuPrint = new QMenu(menuBar);
        menuPrint->setObjectName(QString::fromUtf8("menuPrint"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPrint->menuAction());
        menuPrint->addAction(actionDestionation);
        menuPrint->addAction(actionDestination_and_time);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDestionation->setText(QApplication::translate("MainWindow", "Destionation", nullptr));
        actionDestination_and_time->setText(QApplication::translate("MainWindow", "Destination and time", nullptr));
        QTableWidgetItem *___qtablewidgetitem = leftTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = leftTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = leftTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Destination", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = leftTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Departure time", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = leftTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Arrival time", nullptr));
        leftAdd->setText(QApplication::translate("MainWindow", "Add", nullptr));
        leftDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        leftMove->setText(QApplication::translate("MainWindow", "--->", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = rightTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = rightTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = rightTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = rightTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Destination", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = rightTable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Arrival time", nullptr));
        rightMove->setText(QApplication::translate("MainWindow", "<---", nullptr));
        rightDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        rightAdd->setText(QApplication::translate("MainWindow", "Add", nullptr));
        menuPrint->setTitle(QApplication::translate("MainWindow", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
