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
    QVBoxLayout *verticalLayout;
    QTableWidget *schedule;
    QHBoxLayout *horizontalLayout;
    QPushButton *actionAdd;
    QPushButton *actionFind;
    QPushButton *actionFilter;
    QPushButton *actionClear;
    QPushButton *actionBook;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(759, 467);
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
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        schedule = new QTableWidget(centralWidget);
        if (schedule->columnCount() < 5)
            schedule->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        schedule->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        schedule->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        schedule->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        schedule->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        schedule->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        schedule->setObjectName(QString::fromUtf8("schedule"));

        verticalLayout->addWidget(schedule);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        actionAdd = new QPushButton(centralWidget);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));

        horizontalLayout->addWidget(actionAdd);

        actionFind = new QPushButton(centralWidget);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));

        horizontalLayout->addWidget(actionFind);

        actionFilter = new QPushButton(centralWidget);
        actionFilter->setObjectName(QString::fromUtf8("actionFilter"));

        horizontalLayout->addWidget(actionFilter);

        actionClear = new QPushButton(centralWidget);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));

        horizontalLayout->addWidget(actionClear);

        actionBook = new QPushButton(centralWidget);
        actionBook->setObjectName(QString::fromUtf8("actionBook"));

        horizontalLayout->addWidget(actionBook);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_central->addLayout(verticalLayout);


        verticalLayout_21->addLayout(horizontalLayout_central);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDestionation->setText(QApplication::translate("MainWindow", "Destionation", nullptr));
        actionDestination_and_time->setText(QApplication::translate("MainWindow", "Destination and time", nullptr));
        QTableWidgetItem *___qtablewidgetitem = schedule->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = schedule->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = schedule->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = schedule->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\261\321\213\320\262\320\260\320\265\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = schedule->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\241\320\262\320\276\320\261\320\276\320\264\320\275\320\276 \320\274\320\265\321\201\321\202", nullptr));
        actionAdd->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        actionFind->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        actionFilter->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200", nullptr));
        actionClear->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        actionBook->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\261\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
