import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1
import project.person 1.0

RowLayout {
    id: root
    property Person personInfo

    implicitWidth: 500
    implicitHeight: layout.height

    //width: implicitWidth
    //height: implicitHeight

    QtObject {
        id: familyStatus
        readonly property var marriageStatuses: ["Single", "Marriage"]
    }

    Rectangle { // Photo
        color: personInfo.img
        height: root.height
        width: height
    }

    ColumnLayout {
        id: layout

        Text {
            text: "Name: " + personInfo.name

            font.pixelSize: 20
        }

        Text {
            text: "Age: " + personInfo.age
            font.pixelSize: 16
        }

        Text {
            text: "Status: " + familyStatus.marriageStatuses[personInfo.fs]
            font.pixelSize: 16
        }

    }
}
