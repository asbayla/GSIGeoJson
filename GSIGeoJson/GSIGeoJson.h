#ifndef GSI_GEOJSON_H
#define GSI_GEOJSON_H

#include "gsigeojson_global.h"

#include <QtCore/QFile>
#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QVariant>

class GSIGEOJSON_EXPORT GSIGeoJson : public QObject

{
	Q_OBJECT
	Q_ENUMS(State)
	Q_PROPERTY(QString jsonData READ jsonData WRITE setJsonData NOTIFY jsonDataChanged)
	Q_PROPERTY(QString result READ result WRITE setResult NOTIFY resultChanged)
	Q_PROPERTY(State state READ state WRITE setState NOTIFY stateChanged)

	GSIGeoJson();

public:
	
	enum State {
		Init,
		JsonLoaded,
		ReadyToWrite
	};

	QString jsonData() const;
	void setJsonData(const QString& data);

	QString result() const;
	void setResult(const QString& result);

	State state() const;
	void setState(const State state);

public Q_SLOTS:
	void loadOriginalJson();
	void convertJsonToQt();
	void convertQtToJson();
	void writeToJsonFileAndReload();

Q_SIGNALS:
	void jsonDataChanged(const QString& data);
	void resultChanged(const QString& result);
	void stateChanged(State state);

private:
	void loadJsonFileRaw(const QString& resultMsg, QFile& jsonFile);
	void setQtData(const QVariant& data);
	void setResultAndState(const QString& resultMsg, State newState);

	QString mJsonData;
	QString mResult;
	GSIGeoJson::State mState;
	QVariant mQtData;

};

#endif
