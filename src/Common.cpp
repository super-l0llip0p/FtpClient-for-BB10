/*
 * Common.cpp
 *
 *  Created on: 2019年11月21日
 *      Author: mark
 */

#include "Common.hpp"

#include <bb/cascades/QmlDocument>

QString Common::qstr(const QString &inputStr)
{
    QTextCodec *codec = QTextCodec::codecForName("utf8");
    if (codec) {
        return codec->toUnicode(inputStr.toLatin1());
    }
    else
    {
        return QString("");
    }
}

QString Common::cstr(const QString &inputStr)
{
    QTextCodec *codec = QTextCodec::codecForName("utf8");
    if (codec) {
        return QString::fromLatin1(codec->fromUnicode(inputStr));
    }
    else
    {
        return QString("");
    }
}

QString Common::getFileNameSuffix(const QString &fileName)
{
    int index = fileName.lastIndexOf(".");
    if (index != -1)
    {
        return (fileName.mid(index).replace(".", ""));
    }
    else
    {
        return QString("");
    }
}

QString Common::getAppSetting(const QString &key)
{
    QSettings settings;
    return settings.value(key, QVariant("")).toString();
}

void Common::setAppSetting(const QString &key, const QString &value)
{
    QSettings settings;
    settings.setValue(key, QVariant(value));
}
