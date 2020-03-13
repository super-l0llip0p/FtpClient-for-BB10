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

#ifndef FTPDOWNLOADER_HPP
#define FTPDOWNLOADER_HPP

#include "FtpItem.hpp"
#include "MessageBoxController.hpp"
#include "ProgressDialogController.hpp"

#include <bb/cascades/QListDataModel>

#include <QtCore/QObject>

namespace bb
{
    namespace cascades
    {
        class Control;
        class QmlDocument;
    }
}

class FtpDownloader : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString hostname     READ hostname     WRITE setHostname   NOTIFY hostnameChanged)
    Q_PROPERTY(QString username     READ username     WRITE setUsername   NOTIFY usernameChanged)
    Q_PROPERTY(QString password     READ password     WRITE setPassword   NOTIFY passwordChanged)
    Q_PROPERTY(QString statusLabel  READ statusLabel  WRITE setStatusLabel NOTIFY statusLabelChanged)
    Q_PROPERTY(QString connectLabel READ connectLabel NOTIFY connectLabelChanged)

    Q_PROPERTY(bool parentDirectoryAvailable    READ parentDirectoryAvailable   NOTIFY parentDirectoryAvailableChanged)
    Q_PROPERTY(bool downloadPossible            READ downloadPossible           NOTIFY downloadPossibleChanged)
    Q_PROPERTY(bool connectPossible             READ connectPossible            NOTIFY connectPossibleChanged)
    Q_PROPERTY(bool selectionPossible           READ selectionPossible          NOTIFY selectionPossibleChanged)
    Q_PROPERTY(bool waitIndicatorPossible       READ waitIndicatorPossible      NOTIFY waitIndicatorPossibleChanged)

public:
    explicit FtpDownloader(QObject *parent = 0);
    ~FtpDownloader();

    bb::cascades::QListDataModel<FtpItem> *model();

    MessageBoxController *messageBoxController();
    ProgressDialogController *progressDialogController();

public Q_SLOTS:
    void cdToParent();
    void cdToRoot();
    void refresh();
    void uploadFile(const QString &filePath);
    void downloadFile();
    void connectOrDisconnect();
    void processItem(const QVariantList &indexPath);
    bool isDirectory(const QVariantList &indexPath);

Q_SIGNALS:
    void hostnameChanged();
    void usernameChanged();
    void passwordChanged();
    void statusLabelChanged();

    void connectLabelChanged();

    void parentDirectoryAvailableChanged();
    void downloadPossibleChanged();
    void connectPossibleChanged();
    void selectionPossibleChanged();
    void waitIndicatorPossibleChanged();

private Q_SLOTS:
    void cancelDownload();
    void ftpCommandFinished(int commandId, bool error);
    void addToList(const QUrlInfo &urlInfo);
    void updateDataTransferProgress(qint64 readBytes, qint64 totalBytes);
    void enableDownloadButton();
    void enableConnectButton();

private:
    QString hostname() const;
    QString username() const;
    QString password() const;
    QString statusLabel() const;
    QString connectLabel() const;

    void setHostname(const QString &hostname);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setStatusLabel(const QString &status);

    bool parentDirectoryAvailable() const;
    bool downloadPossible() const;
    bool connectPossible() const;
    bool selectionPossible() const;
    bool waitIndicatorPossible() const;

    void setInfoStatusLabel(const QString &info, bool qstr = true);
    void setErrorStatusLabel(const QString &error, bool qstr = true);

    void connectToFtp();

    bb::cascades::QListDataModel<FtpItem> m_model;

    QString m_hostname;
    QString m_username;
    QString m_password;

    QFtp *m_ftp;
    QFile *m_file;

    QString m_currentPath;
    QString m_fileName;
    QString m_statusLabel;
    QString m_connectLabel;

    bool m_parentDirectoryAvailable;
    bool m_downloadPossible;
    bool m_connectPossible;
    bool m_selectionPossible;
    bool m_waitIndicatorPossible;

    QVariantList m_currentIndexPath;

    QNetworkSession *m_networkSession;
    QNetworkConfigurationManager m_manager;

    MessageBoxController m_messageBoxController;
    ProgressDialogController m_progressDialogController;
};

#endif
