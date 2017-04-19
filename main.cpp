#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "person.h"
#include "peoplemodel.h"
#include <iostream>
#include <QQuickView>
#include <QQmlContext>
#include <QDebug>
#include <QTimer>
using namespace std;

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    qmlRegisterType<Person>("project.person",1,0,"Person");
    qmlRegisterType<PeopleModel>("project.person",1,0,"People");

    PeopleModel myModel;
    myModel.addPerson("Dimon", 27, QColor(100, 200, 255));

    for (int i = 0; i < 100; i++) {
        myModel.addPerson("User #...", i, QColor((i*10) % 255, 0, 0));
    }

    QTimer::singleShot(3000, [&myModel](){
        myModel.addPerson("Ihor", 25, QColor(0, 200, 0));
    });

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("myModel",&myModel);
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));


    return app.exec();
}
