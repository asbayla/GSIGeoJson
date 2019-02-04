#include "GSIPGDB.h"

using namespace gsipgdb;

GSIPGDB::GSIPGDB()
{
}


GSIPGDB::~GSIPGDB()
{
}

GSIPGDB::GSIPGDB::GSIPGDB(std::string iHost, std::string idbName, std::string iUsername, std::string iPassword, uint16_t iPort)
{
}

GSIPGDB::GSIPGDB::GSIPGDB(std::string iHost, uint16_t iPort)
{
}

GSIPGDB::GSIPGDB::GSIPGDB(const GSIPGDB & db) noexcept
{
}

GSIPGDB::GSIPGDB::GSIPGDB(GSIPGDB && db) noexcept
{
}

GSIPGDB & gsipgdb::GSIPGDB::operator=(const GSIPGDB & rhs) noexcept
{
	// TODO: insert return statement here
	return *this;
}

GSIPGDB & gsipgdb::GSIPGDB::operator=(GSIPGDB && rhs) noexcept
{
	// TODO: insert return statement here
	return *this;
}


bool GSIPGDB::connect()
{
	return false;
}

void GSIPGDB::disconnect()
{
}

bool GSIPGDB::GSIPGDB::queryDatabase(std::string sql)
{
	return false;
}

std::string GSIPGDB::GSIPGDB::getDriverType()
{
	return std::string();
}

void GSIPGDB::GSIPGDB::setDriverType(std::string)
{
}

std::string GSIPGDB::GSIPGDB::getHost()
{
	return std::string();
}

void GSIPGDB::GSIPGDB::setHost(std::string iHost)
{
}

std::string GSIPGDB::GSIPGDB::getDBName()
{
	return std::string();
}

void GSIPGDB::GSIPGDB::setDBName(std::string idbName)
{
}

std::string GSIPGDB::GSIPGDB::getUserName()
{
	return std::string();
}

void GSIPGDB::GSIPGDB::setUserName(std::string iUsername)
{
}

void GSIPGDB::GSIPGDB::setPassword(std::string iPassword)
{
}

uint16_t GSIPGDB::GSIPGDB::getPort()
{
	return uint16_t();
}

void GSIPGDB::GSIPGDB::setPort(uint16_t iPort)
{
}

bool GSIPGDB::GSIPGDB::getConnStatus()
{
	return false;
}
