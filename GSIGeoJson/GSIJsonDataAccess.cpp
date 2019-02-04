#include "GSIJsonDataAccess.h"

#include <iostream>

#include "qvariant.h"
#include <qfile.h>
#include <qjsondocument.h>
#include <qjsonarray.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>

#include <QDebug>

GSIJsonDataAccess::GSIJsonDataAccess(QObject * parent)
{
}

GSIJsonDataAccess::~GSIJsonDataAccess()
{
}

QVariant GSIJsonDataAccess::load(const QString & filePath)
{
	QJsonDocument geojDoc;
	QFile file;
	file.setFileName(filePath);
	file.open(QIODevice::ReadOnly | QIODevice::Text);
	if (file.NoError) {
		QString content = file.readAll();
		geojDoc = QJsonDocument::fromJson(content.toLocal8Bit());
		file.close();
		return geojDoc.toVariant();
	}
}

QVariant GSIJsonDataAccess::load(QIODevice * ioDevice)
{
	return QVariant();
}

QVariant GSIJsonDataAccess::loadFromBuffer(const QByteArray & buffer)
{
	return QVariant();
}

void GSIJsonDataAccess::save(const QVariant & data, const QString & filePath)
{
}

void GSIJsonDataAccess::save(const QVariant & data, QIODevice * ioDevice)
{
}

void GSIJsonDataAccess::saveToBuffer(const QVariant & data, QByteArray * buffer)
{
}

void GSIJsonDataAccess::saveToBuffer(const QVariant & data, QString * buffer)
{
}

bool GSIJsonDataAccess::hasError() const
{
	return false;
}

QVariant GSIJsonDataAccess::loadFromBuffer(const QString & buffer)
{
	return QVariant();
}
