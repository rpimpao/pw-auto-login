#ifndef CHARMODEL_H
#define CHARMODEL_H
#include <QAbstractTableModel>
#include "chardata.h"

class CharModel : public QAbstractTableModel
{
public:
    CharModel();
    inline int columnCount(const QModelIndex &parent = QModelIndex()) const {
        Q_UNUSED(parent);
        return 2;
    }
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

    bool insertRows(int row, int count, const QModelIndex & parent = QModelIndex());
    bool removeRows(int row, int count, const QModelIndex & parent = QModelIndex());

    void pushCharData(CharData newChar);
    const CharData& getCharData(const int row) const;
    void deleteCharData(const int row);
private:
    QVector<CharData> m_charData;
};

#endif // CHARMODEL_H
