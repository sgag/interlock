#ifndef AREA_H
#define AREA_H

#include <logicobject.h>


//=================================================
// Наследник LogicObject #1 - Area (Зона привязки)
//=================================================
class Area : public LogicObject
{
    Q_OBJECT

private:

public:
    Area(QObject *parent, int newId, QString newName, QString newSysName, int newAreaId);

signals:

public slots:
    virtual QString toString();

};

#endif // AREA_H
