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

int DBQuery::hCon;//��������� 0�� �ʱ�ȭ ���� �ʾƵ� �ڵ����� ��

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	hCon = 1234;
	puts("����Ǿ����ϴ�.");
}
void DBQuery::DBDisconnect()
{
	//������ �����Ѵ�
	hCon = NULL;
	puts("������ ���������ϴ�.");
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

	//DB���Ǹ� �Ѵ� 
	Q1.RunQuery("select * from eefasgfaf where ���� ģ�ѻ��");

	DBQuery::DBDisconnect();



}