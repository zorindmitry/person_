#ifndef PEOPLEMODEL_H
#define PEOPLEMODEL_H

#include <QAbstractListModel>
#include <QVector>
#include <QColor>
#include "person.h"


class PeopleModel : public QAbstractListModel {
    Q_OBJECT
public:
    explicit PeopleModel(QObject *parent = 0);
    ~PeopleModel();

    virtual int rowCount(const QModelIndex&) const override;
    virtual QVariant data(const QModelIndex& index, int role) const override;

    void addPerson(QString name, int age, QColor color);

private:
    QVector<Person*> people;
};


#endif // PEOPLEMODEL_H
