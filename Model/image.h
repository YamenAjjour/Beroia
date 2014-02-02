#ifndef IMAGE_H
#define IMAGE_H
#include <QString>
#include <QDate>
class Image
{
private:
    int Imageid;
    QString Name;
    QString Location;
    QDate CaptureDate;
    QString Place;
    QByteArray Data;
    QString GpsLangitude;
    QString GpsLatitude ;
    QString GpsPosition;
public:
    Image(int imageId,QString name , QString Location =QString(),QDate captureDate , QString Place = QString() , QByteArray data , QString gpsLatitude = QString , QString gpsLangitude , QString gpsPosition);
};

#endif // IMAGE_H
