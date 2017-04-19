#include "person.h"

Person::Person(const QString &name, int age, QObject *parent): QObject(parent)
{
    this->name = name;
    this->age=age;
}

Person::Person(QObject *parent): QObject(parent)
{
}

QString Person::getName() const {
    return name;
}

void Person::setName(const QString &value) {
    if (value == name) return;
    name = value;
    emit nameChanged();
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int value) {
    if (age == value) return;
    age = value;
    emit ageChanged();
}

Person::FamilyStatus Person::getFs() const {
    return fs;
}

void Person::setFs(Person::FamilyStatus input_fs) {
    if (fs == input_fs) return;
    fs = input_fs;
    emit fsChanged();
}

QColor Person::getImg() const {
    return img;
}

void Person::setImg(QColor input_img) {
    if (img == input_img) return;
    img = input_img;
    emit imgChanged();
}

