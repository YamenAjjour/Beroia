#include "image.h"

Image::Image(int imageId,QString name , QString location =QString(),QDate captureDate , QString place = QString() , QByteArray data , QString gpsLatitude = QString , QString gpsLangitude , QString gpsPosition)
{
    Imageid = imageId;
    Name = name;
    Location = location;
    CaptureDate = captureDate;
    Place = place;
    Data = data;
    GpsLatitude = gpsLatitude;
    GpsLangitude = gpsLangitude;
    GpsPosition = gpsPosition;
}
