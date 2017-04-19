#include "peoplemodel.h"

PeopleModel::PeopleModel(QObject *parent) : QAbstractListModel(parent)
{
}

PeopleModel::~PeopleModel()
{
    for (auto &x : people)
        delete x;
}


int PeopleModel::rowCount(const QModelIndex &) const {
    return people.size();
}

QVariant PeopleModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid()) return QVariant();

    if (role != Qt::DisplayRole) return QVariant();

    return QVariant::fromValue<Person*>(people.at(index.row()));
}

void PeopleModel::addPerson(QString name, int age, QColor color) {
    const int N = people.size();

    beginInsertRows(QModelIndex(), N, N);

    auto pers = new Person();
    pers->setAge(age);
    pers->setName(name);
    pers->setImg(color);
    people.append(pers);

    endInsertRows();
}
