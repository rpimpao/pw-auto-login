#ifndef CHARDATA_H
#define CHARDATA_H
#include <QString>
#include <QStringList>

class CharData
{
public:
    CharData();
    CharData(const QString &account, const QString &password, const QString &charName);

    QString getAccount() const { return m_account; }
    QString getPassword() const { return m_password; }
    QString getCharName() const { return m_charName; }

    void setAccount(const QString& account);
    void setPassword(const QString& password);
    void setCharName(const QString& charName);
    QStringList toList() const;
private:
    QString m_account;
    QString m_password;
    QString m_charName;
};

#endif // CHARDATA_H
