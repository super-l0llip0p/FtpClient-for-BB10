/****************************************************************************
 **
 ** Portions Copyright (C) 2012 Research In Motion Limited.
 ** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 ** All rights reserved.
 ** Contact: Research In Motion Ltd. (http://www.rim.com/company/contact/)
 ** Contact: Nokia Corporation (qt-info@nokia.com)
 **
 ** This file is part of the examples of the BB10 Platform and is derived
 ** from a similar file that is part of the Qt Toolkit.
 **
 ** You may use this file under the terms of the BSD license as follows:
 **
 ** "Redistribution and use in source and binary forms, with or without
 ** modification, are permitted provided that the following conditions are
 ** met:
 **   * Redistributions of source code must retain the above copyright
 **     notice, this list of conditions and the following disclaimer.
 **   * Redistributions in binary form must reproduce the above copyright
 **     notice, this list of conditions and the following disclaimer in
 **     the documentation and/or other materials provided with the
 **     distribution.
 **   * Neither the name of Research In Motion, nor the name of Nokia
 **     Corporation and its Subsidiary(-ies), nor the names of its
 **     contributors may be used to endorse or promote products
 **     derived from this software without specific prior written
 **     permission.
 **
 ** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 ** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 ** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 ** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 ** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 ** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 ** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 ** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 ** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 ** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
 **
 ****************************************************************************/

import bb.cascades 1.4
import bb.cascades.pickers 1.0

Container {
    layout: DockLayout {
    }
    ImageView {
        imageSource: "asset:///images/top.png"
        horizontalAlignment: HorizontalAlignment.Fill
        verticalAlignment: VerticalAlignment.Top
    }
    ImageView {
        imageSource: "asset:///images/bottom.png"
        horizontalAlignment: HorizontalAlignment.Fill
        verticalAlignment: VerticalAlignment.Bottom
    }
    Container {
        horizontalAlignment: HorizontalAlignment.Fill
        verticalAlignment: VerticalAlignment.Fill
        leftPadding: ui.sddu(1)
        rightPadding: leftPadding
        Container {
            layout: StackLayout {
                orientation: LayoutOrientation.LeftToRight
            }
            minHeight: 120
            TextField {
                id: username_at_hostname_textfield
                text: {
                    if (_downloader.username != "" && _downloader.hostname != "") {
                        text = _downloader.username + "@" + _downloader.hostname;
                    }
                }
                hintText: qsTr("用户名@服务器地址")
                layoutProperties: StackLayoutProperties {
                    spaceQuota: 2
                }
                verticalAlignment: VerticalAlignment.Center
            }
            TextField {
                id: password_textfield
                text: _downloader.password
                hintText: qsTr("密码")
                inputMode: TextFieldInputMode.Password
                layoutProperties: StackLayoutProperties {
                    spaceQuota: 1
                }
                verticalAlignment: VerticalAlignment.Center
            }
            Button {
                text: _downloader.connectLabel
                enabled: _downloader.connectPossible
                onClicked: {
                    var username_at_hostname = username_at_hostname_textfield.text;
                    var index = username_at_hostname.indexOf("@");
                    if (index != -1) {
                        var username = username_at_hostname.substring(0, index);
                        var hostname = username_at_hostname.substring(index + 1);
                        if (username != "" && hostname != "") {
                            _downloader.hostname = hostname;
                            _downloader.username = username;
                            _downloader.password = password_textfield.text;
                            _downloader.connectOrDisconnect();
                            return;
                        }
                    }
                    _downloader.statusText = qsTr("错误：服务器地址和用户名不能为空。");
                }
                layoutProperties: StackLayoutProperties {
                    spaceQuota: 1
                }
                verticalAlignment: VerticalAlignment.Center
            }
        }
        ListView {
            id: listview
            dataModel: _model
            listItemProvider: _itemProvider
            enabled: _downloader.selectionPossible
            scrollRole: ScrollRole.Main
            horizontalAlignment: HorizontalAlignment.Fill
            verticalAlignment: VerticalAlignment.Fill
            topMargin: ui.sddu(1)
            onTriggered: {
                clearSelection();
                if (! _downloader.isDirectory(indexPath)) {
                    select(indexPath);
                }
                _downloader.processItem(indexPath);
            }
        }
        Container {
            bottomMargin: ui.sddu(0.5)
            Label {
                id: status_label
                text: _downloader.statusLabel
                horizontalAlignment: HorizontalAlignment.Fill
                textStyle {
                    base: SystemDefaults.TextStyles.SmallText
                    color: Color.Black
                }
            }
        }
        Container {
            layout: StackLayout {
                orientation: LayoutOrientation.LeftToRight
            }
            minHeight: 120
            Button {
                text: qsTr("/")
                enabled: _downloader.parentDirectoryAvailable
                onClicked: _downloader.cdToRoot()
                layoutProperties: StackLayoutProperties {
                    spaceQuota: 1
                }
                verticalAlignment: VerticalAlignment.Center
            }
            Button {
                text: qsTr("上级目录")
                enabled: _downloader.parentDirectoryAvailable
                onClicked: _downloader.cdToParent()
                layoutProperties: StackLayoutProperties {
                    spaceQuota: 1
                }
                verticalAlignment: VerticalAlignment.Center
            }
            Button {
                text: qsTr("上传")
                enabled: _downloader.connectLabel == "断开连接"
                onClicked: {
                    file_picker.open();
                }
                layoutProperties: StackLayoutProperties {
                    spaceQuota: 1
                }
                verticalAlignment: VerticalAlignment.Center
            }
            attachedObjects: [
                FilePicker {
                    id: file_picker
                    type: defaultType
                    title: qsTr("选择文件")
                    directories: [ "/accounts/1000/shared/" ]
                    onFileSelected: {
                        _downloader.uploadFile(selectedFiles);
                    }
                }
            ]
            Button {
                text: qsTr("下载")
                enabled: _downloader.downloadPossible
                onClicked: {
                    _downloader.downloadFile();
                    listview.clearSelection();
                }
                layoutProperties: StackLayoutProperties {
                    spaceQuota: 1
                }
                verticalAlignment: VerticalAlignment.Center
            }
        }
    }
    ActivityIndicator {
        id: wait_indicator
        preferredWidth: 180
        preferredHeight: 180
        running: _downloader.waitIndicatorPossible
        horizontalAlignment: HorizontalAlignment.Center
        verticalAlignment: VerticalAlignment.Center
    }
}
