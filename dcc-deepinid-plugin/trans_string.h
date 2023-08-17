// SPDX-FileCopyrightText: 2018-2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#pragma once
#include <QObject>

enum TransStrType:int {
    STRING_CLOUDTITLE,
    STRING_CANOTUSE,
    STRING_CANCEL,
    STRING_CLOUDMSG,

    STRING_SYSCONFIG,
    STRING_NETWORK,
    STRING_SOUND,
    STRING_MOUSE,
    STRING_UPDATE,
    STRING_DOCK,
    STRING_LAUNCHER,
    STRING_WALLPAPER,
    STRING_THEME,
    STRING_POWER,
    STRING_SELECTALL,
    STRING_UNSELECTALL,
    STRING_EMPTY,
    STRING_EMPTYMSG,
    STRING_CLEARBTN,
    STRING_SYNCING,
    STRING_LASTSYNC,

    STRING_CONFIRM,
    STRING_LOCALTITLE,
    STRING_LOCALMSG,


    STRING_DEVTITLE,
    STRING_DEVMSG,

    STRING_OSVER,
    STRING_CURRDEV,
    STRING_REMOVE,
    STRING_DELDLGTITLE,

    STRING_CLOUDSV,
    STRING_CLOUDTITLEMSG,
    STRING_LOGIN,

    STRING_CLOUDITEM,
    STRING_DEVITEM,
    STRING_SECURITYITEM,
    STRING_INACTIVE,

    STRING_TITLEPHONE,
    STRING_MSGPHONE,
    STRING_PHONEBIND,
    STRING_MAILBIND,
    STRING_WECHATTITLE,
    STRING_WECHATMSG,
    STRING_WECHATUNBINDTITLE,
    STRING_WECHATUNBINDMESSAGE,
    STRING_PASSWORDTITLE,
    STRING_PASSWORDMSG,
    STRING_PWDACTION,
    STRING_PWDMODSUCCESS,
    STRING_FAILTIP,
    STRING_RESETPWDTIP,

    STRING_PHONEHOLDER,
    STRING_MAILHOLDER,
    STRING_PHONEINVALID,
    STRING_MAILINVALID,
    STRING_USEANOPHONE,
    STRING_USEANOMAIL,

    STRING_BINDTIP,
    STRING_UNBINDTIP,
    STRING_UNLINKED,
    STRING_MODIFY,
    STRING_PWDCHECKERROR,
    STRING_LOGINLIMIT,
    STRING_REBINDPHONE,
    STRING_REBINDMAIL,

    STRING_VERIFYTITLE,
    STRING_VERIFYMSG,
    STRING_RESETPWDTITLE,
    STRING_FORGETPWD,


    STRING_BINDLOCAL,
    STRING_REGISTERPWD,

    STRING_VERIFYCODE,
    STRING_VERIFYHOLDER,
    STRING_RESENDCODE,
    STRING_VERIFYINVALID,

    STRING_WECHATBIND,
    STRING_WECHATSCAN,

    STRING_PWDDIGCHAR,
    STRING_PWDLENGTH,

    STRING_PWDHOLDER,
    STRING_PWDNOTMATCH,
    STRING_AGAINHOLDER,
    STRING_PWDINVALID,
    STRING_NICKNAMEINVALID,
    STRING_NICKNAMENULL,
    STRING_NICKNAMEONCE,
    STRING_SUCCESSTIP,
    STRING_EMPTYTITLE,
};



class TransString:public QObject
{
    Q_OBJECT
public:
    static QString getTransString(TransStrType type);
};


