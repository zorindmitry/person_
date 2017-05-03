#ifndef PERSONDATAINFILE_H
#define PERSONDATAINFILE_H
#include "persondata.h"
#include <QObject>

class PersonDataInFile : public QObject
{
    Q_OBJECT
public:
    explicit PersonDataInFile(QObject *parent = 0);
    //void addPerson();

signals:

public slots:
};

#endif // PERSONDATAINFILE_H
