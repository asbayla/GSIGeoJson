#pragma once
#include <qobject.h>
#include <qiodevice.h>

class GSIJsonDataAccess :
	public QObject
{
public:
	GSIJsonDataAccess(QObject* parent = 0);
	~GSIJsonDataAccess();

	QVariant load(const QString& filePath);
	QVariant load(QIODevice* ioDevice);
	QVariant loadFromBuffer(const QByteArray& buffer);
	QVariant loadFromBuffer(const QString& buffer);

	void save(const QVariant& data, const QString& filePath); 
	void save(const QVariant& data, QIODevice* ioDevice);
	void saveToBuffer(const QVariant& data, QByteArray* buffer);
	void saveToBuffer(const QVariant& data, QString* buffer);

	bool hasError() const;
	//DataAccessError error() const;

};

