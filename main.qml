import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

import project.person 1.0


ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Change name of this app")

    ColumnLayout{
        id:root
        width: implicitWidth
        height: implicitHeight

        anchors.fill: parent
        ListView {
            width: implicitWidth
            height: implicitHeight
            id: listOfPerson
            //anchors.bottomMargin: 45
            //anchors.fill: parent
            spacing: 4
            model: myModel
            delegate: PersonView {
                personInfo: display
            }

        }

        RowLayout {
            visible: true
            //anchors.left:listOfPerson.left
            //anchors.top:listOfPerson.bottom
            //Layout.fillWidth: true

            Button{
                //width: parent.width/2
                id: addButton
                text: qsTr("+")

            }
            Button{
                //width: parent.width/2
                id: deleteButton
                text: qsTr("-")
            }
        }
    }
}

