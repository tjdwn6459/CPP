#include <stdio.h>

class DBQuery
{
private:
	static int hCon;
	int nResult;

public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID, const char* Pass);
	static void DBDisconnect();
	bool RunQuery(const char* SQL);
};

int DBQuery::hCon;//정적멤버에 0을 초기화 하지 않아도 자동으로 들어감

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	hCon = 1234;
	puts("연결되었습니다.");
}
void DBQuery::DBDisconnect()
{
	//접속을 해제한다
	hCon = NULL;
	puts("연결이 끊어졌습니다.");
}

bool DBQuery::RunQuery(const char* SQL)
{
	puts(SQL);
	return true;
}

int main()
{
	DBQuery::DBConnect("Secret", "Adult", "doemdkjdgl");
	DBQuery Q1, Q2, Q3;

	//DB질의를 한다 
	Q1.RunQuery("select * from eefasgfaf where 나랑 친한사람");

	DBQuery::DBDisconnect();



}