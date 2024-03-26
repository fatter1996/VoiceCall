#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Universal.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    GlobalData::m_pConfigInfo = new ConfigInfo;
    GlobalData::m_pConfigInfo->init();

    ui->setupUi(this);
    m_pVoice = new VoiceDialog;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_callButton_clicked()
{
    m_pVoice->setAddress(ui->IPEdit->text(), ui->portEdit->text().toUInt());
    m_pVoice->RequestCall();
}
