#include "chardata.h"

CharData::CharData() : m_account(), m_password(), m_charName()
{
}

CharData::CharData(const QString &account, const QString &password, const QString &charName) :
    m_account(account), m_password(password), m_charName(charName)
{
}

void CharData::setAccount(const QString &account)
{
    m_account = account;
}

void CharData::setPassword(const QString &password)
{
    m_password = password;
}

void CharData::setCharName(const QString &charName)
{
    m_charName = charName;
}

QStringList CharData::toList() const
{
    return{m_account, m_password, m_charName};
}
