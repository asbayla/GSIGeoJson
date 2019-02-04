#include "GSIGeoJson.h"

#include <qdir.h>
#include <qtemporaryfile.h>

#include "GSIGeoJsonGenerator.h"
#include "GSIJsonDataAccess.h"

GSIGeoJson::GSIGeoJson()
{
}

QString GSIGeoJson::jsonData() const
{
	return QString();
}

void GSIGeoJson::setJsonData(const QString & data)
{
}

QString GSIGeoJson::result() const
{
	return QString();
}

void GSIGeoJson::setResult(const QString & result)
{
}

GSIGeoJson::State GSIGeoJson::state() const
{
	return State();
}

void GSIGeoJson::setState(const State state)
{
}

void GSIGeoJson::convertJsonToQt()
{
	const QString result = tr("Converting ... ");
	setResult(result);
	setQtData(QVariant());

	GSIJsonDataAccess jda;
	QVariant qtData = jda.loadFromBuffer(mJsonData);
	if (jda.hasError()) {
		//const DataAccessError err = jda.error();
		//const QString errorMsg = tr("Error converting JSON data: %1").arg(err.errorMessage());
		//setResultAndState(errorMsg, JsonLoaded);
	}
	else {
		setQtData(qtData);
		const GSIGeoJsonGenerator fmt;
	}
}

void GSIGeoJson::convertQtToJson()
{
	const QString result = tr("Converting ... ");
	setResult(result);

	QString jsonBuffer;
	GSIJsonDataAccess jda;
	jda.saveToBuffer(mQtData, &jsonBuffer);
	if (jda.hasError()) {
		//const DataAccessError err = jda.error();
		//const QString errorMsg = tr("Error converting Qt data to JSON: %1").arg(err.errorMessage());
		//setResultAndState(errorMsg, QtDisplayed);
	}
	else {
		setResultAndState(result + tr("Success"), ReadyToWrite);
	}
}

void GSIGeoJson::writeToJsonFileAndReload()
{
	const QString result = tr("Writing file ... ");
	setResult(result);

	const QDir home = QDir::home();
	QTemporaryFile file(home.absoluteFilePath("XXXXXX.json"));
	if (file.open()) {
		GSIJsonDataAccess jda(&file);
		jda.save(mQtData, &file);
		if (jda.hasError()) {
			//const GSIDataAccessError err = jda.error();
			//const QString errorMsg = tr("Error writing data to JSON file: %1").arg(err.errorMessage());
			//setResultAndState(errorMsg, ReadyToWrite);
		}
		else {
			file.close();
			loadJsonFileRaw(tr("Reloading new JSON file ... "), file);
		}
	}
}

void GSIGeoJson::loadJsonFileRaw(const QString & resultMsg, QFile & jsonFile)
{
	if (!jsonFile.open(QFile::ReadOnly)) {
		const QString msg = tr("Failed to open JSON file: %1").arg(jsonFile.fileName());
		setJsonData(QString());
		setResultAndState(msg, Init);
		return;
	}

	const QString doc = QString::fromUtf8(jsonFile.readAll());
	setJsonData(doc);
	setResultAndState(resultMsg + tr("Success"), JsonLoaded);
}

void GSIGeoJson::setQtData(const QVariant & data)
{
}

void GSIGeoJson::setResultAndState(const QString & resultMsg, State newState)
{
}
