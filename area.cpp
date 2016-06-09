#include "area.h"

Area::Area(QObject *parent,
           int newId,
           QString newName,
           QString newSysName,
           int newAreaId) : LogicObject(parent, newId, newName, newSysName, newAreaId) {}

QString Area::toString() {
  QString ret = "Area - id:" + QString::number(getObjId())
                + ",name:" + getObjName()
                + ",sysName:" + getObjSysName()
                + ",area:" + QString::number(getObjAreaId())
                + ",failState:" + (isObjFailState()?"dead":"alive")
                + ",safety:" + (checkSafetyConditions()?"safe":"not safe");
  return ret;
}
