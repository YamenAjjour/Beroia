#ifndef TAG_H
#define TAG_H
#include <QRect>
class Tag
{
private:
    int _imageid;
    int _personid;
    QRect rect;
    int rank;
    bool _manually_located;
public:
    Tag();
};

#endif // TAG_H
