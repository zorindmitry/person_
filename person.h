#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>
#include <QDebug>
#include <QColor>


class Person : public QObject {
    Q_OBJECT
public:
    enum FamilyStatus {
        Single,
        Marriage
    };
    Q_ENUMS(FamilyStatus)


    Person(const QString &name, int age, QObject *parent = 0);
    explicit Person( QObject *parent = 0);

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int  age READ getAge WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(FamilyStatus fs READ getFs WRITE setFs NOTIFY fsChanged)
    Q_PROPERTY(QColor img READ getImg WRITE setImg NOTIFY imgChanged)


public:
    QString getName() const;
    void setName(const QString& value);
    int getAge() const;
    void setAge(int value);

    FamilyStatus getFs() const;
    void setFs(FamilyStatus input_fs);

    QColor getImg() const;
    void setImg(QColor input_img);

signals:
    void nameChanged();
    void ageChanged();
    void fsChanged();
    void imgChanged();

private:
    QColor img;
    QString name;
    int age { 0 };
    FamilyStatus fs { FamilyStatus::Single };
};

//Q_DECLARE_METATYPE(Person)


#endif // PERSON_H
