#pragma once

#include <vector>

#include <QtSql/qtsqlglobal.h>
#include <qsqlresult.h>
#include <qsqldatabase.h>

using namespace std;

namespace gsipgdb
{
#define DEFAULT_PORT 5432

	class GSIPGDB
	{
	public:
		GSIPGDB();
		~GSIPGDB();

		GSIPGDB(std::string iHost, std::string idbName, std::string iUsername, std::string iPassword, uint16_t iPort = DEFAULT_PORT);
		GSIPGDB(std::string iHost, uint16_t iPort = DEFAULT_PORT);
		GSIPGDB(const GSIPGDB& db) noexcept;
		GSIPGDB(GSIPGDB&& db) noexcept;
		GSIPGDB& operator=(const GSIPGDB& rhs) noexcept;
		GSIPGDB& operator=(GSIPGDB&& rhs) noexcept;

		std::string getDriverType();
		void setDriverType(std::string);

		std::string getHost();
		void setHost(std::string iHost);

		std::string getDBName();
		void setDBName(std::string idbName);

		std::string getUserName();
		void setUserName(std::string iUsername);

		void setPassword(std::string iPassword);
		uint16_t getPort();

		void setPort(uint16_t iPort);
		bool getConnStatus();

		bool connect();
		void disconnect();

		bool queryDatabase(std::string sql);

	private:
		QSqlDatabase* conn;
		QSqlResult *res;
		char* host;
		char* dbName;
		char* username;
		char* password;
		uint16_t port;
		bool connStatus;

	};
}
