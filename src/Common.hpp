/*
 * Common.hpp
 *
 *  Created on: 2019年11月21日
 *      Author: mark
 */

#ifndef COMMON_HPP_
#define COMMON_HPP_

class Common
{
    public:
        static QString qstr(const QString &inputStr);
        static QString cstr(const QString &inputStr);

        static QString getFileNameSuffix(const QString &fileName);

        static QString getAppSetting(const QString &key);
        static void setAppSetting(const QString &key, const QString &value);
};

#endif /* COMMON_HPP_ */
