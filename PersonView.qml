import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1
import project.person 1.0

RowLayout {
    id: root
    property Person personInfo

    implicitWidth: 500
    implicitHeight: layout.height


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
        }

        Text {
            text: "Age: " + personInfo.age
        }

        Text {
            text: "Status: " + familyStatus.marriageStatuses[personInfo.fs]
        }
    }
}
