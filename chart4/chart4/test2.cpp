#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Cmember {
private:
	char name[12];
	char add[50];
	char tel[100];
	static int cnt;


public:
	Cmember(const char *atel, const char* aname, const char* aadd)
	{
		strcpy(tel, atel);
		strcpy(name, aname);
		strcpy(add, aadd);
		cnt++;
	}

	void print()
	{
		printf("��ȭ��ȣ = %s, �̸� = %s, �ּ� = %s\n ", tel, name, add);
	}

	void num()
	{
		printf("�� ȸ���� : %d\n", cnt);
	}

};

int Cmember::cnt;//��������� �ȿ��� �����ϱ� ������ ���� ���� �ʱ�ȭ �����ش� 

int main()
{
	Cmember kim("23232","�ȼ���", "������");
	kim.print();
	kim.num();

	Cmember yo("22424", "���", "����");
	yo.print();
	yo.num();
}

