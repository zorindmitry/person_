#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <QObject>

class PersonData : public QObject
{
    Q_OBJECT
public:
    explicit PersonData(QObject *parent = 0);
    void addPerson();
signals:

public slots:
};

#endif // PERSONDATA_H
