#ifndef QSIGEOJSONGNERATOR_H
#define QSIGEOJSONGNERATOR_H

#include <QtCore/QString>
#include <QtCore/QVariant>

class GSIGeoJsonGenerator
{
public:
	GSIGeoJsonGenerator();
	~GSIGeoJsonGenerator();

	/**
	 * Returns the the given value formatted as string.
	 */
	QString asString(const QVariant &value) const;

	void traverse(const QVariant& value, QString& out) const;
};

#endif

