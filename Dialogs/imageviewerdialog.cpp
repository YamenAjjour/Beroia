#include "imageviewerdialog.h"
#include "ui_imageviewerdialog.h"

ImageViewerDialog::ImageViewerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImageViewerDialog)
{
    ui->setupUi(this);
}

ImageViewerDialog::~ImageViewerDialog()
{
    delete ui;
}
