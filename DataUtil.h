#ifndef DATAUTIL_H
#define DATAUTIL_H

#include <QString>
class DataUtil
{
public:
    DataUtil();
public:
    static bool deleteDir(const QString &dirName);
    static bool copyDir(const QString &source, const QString &destination, bool override = true);

};

#endif // DATAUTIL_H
