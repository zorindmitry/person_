import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

import project.person 1.0


ApplicationWindow {
    visible: true
    width: 640
    height: 480

    title: qsTr("Hello World")


//    ListModel {
//        id: myModel

//        ListElement {
//            ageValue: 27
//            nameValue: "Vasya"
//            colorValue: "blue"
//        }

//        ListElement {
//            ageValue: 105
//            nameValue: "Old Man"
//            colorValue: "red"
//        }
//    }


    ListView {
        anchors.fill: parent
        spacing: 4

        model: myModel

        delegate: PersonView {
//            personInfo: Person {
//                age: display.age
//                name: display.name
//                img: display.img
//            }

            personInfo: display
        }

//        delegate: Text {
//            text: nameValue + " - " + ageValue
//        }
    }
}

