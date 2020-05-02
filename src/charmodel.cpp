#include "charmodel.h"
#include <QDebug>

CharModel::CharModel() : m_charData()
{

}

int CharModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_charData.size();
}

QVariant CharModel::data(const QModelIndex &index, int role) const
{
    if(index.row() < 0 || index.row() > m_charData.size() || index.column() > 2)
    {
        return QVariant();
    }

    if(role == Qt::DisplayRole)
    {
        const CharData &data = m_charData.at(index.row());
        switch (index.column()) {
        case 0:
            return data.getAccount();
            break;
        case 1:
            return data.getCharName();
            break;
        default:
            return QVariant();
            break;
        }
    }
    return QVariant();
}

QVariant CharModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal) {
            switch (section)
            {
            case 0:
                return QString("Conta");
            case 1:
                return QString("Char");
            }
        }
    }
    return QVariant();
}

bool CharModel::insertRows(int row, int count, const QModelIndex &parent)
{
    Q_UNUSED(parent);
    beginInsertRows(QModelIndex(), row, row+count-1);
    // row added by pushData
    endInsertRows();
    return true;
}

bool CharModel::removeRows(int row, int count, const QModelIndex &parent)
{
    Q_UNUSED(parent);
    beginRemoveRows(QModelIndex(), row, row+count-1);
    endRemoveRows();
    return true;
}

void CharModel::pushCharData(CharData newChar)
{
    m_charData.push_back(newChar);
    insertRow(rowCount());
}

void CharModel::deleteCharData(const int row)
{
    removeRow(row);
    m_charData.remove(row);
}

const CharData& CharModel::getCharData(const int row) const
{
    return m_charData.at(row);
}
