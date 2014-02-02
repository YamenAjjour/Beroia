#ifndef IMAGEVIEWERDIALOG_H
#define IMAGEVIEWERDIALOG_H

#include <QDialog>

namespace Ui {
class ImageViewerDialog;
}

class ImageViewerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ImageViewerDialog(QWidget *parent = 0);
    ~ImageViewerDialog();

private:
    Ui::ImageViewerDialog *ui;
};

#endif // IMAGEVIEWERDIALOG_H
