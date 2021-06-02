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
		printf("전화번호 = %s, 이름 = %s, 주소 = %s\n ", tel, name, add);
	}

	void num()
	{
		printf("총 회원수 : %d\n", cnt);
	}

};

int Cmember::cnt;//정적멤버는 안에서 못쓰니까 밖으로 빼서 값을 초기화 시켜준다 

int main()
{
	Cmember kim("23232","안성주", "수영구");
	kim.print();
	kim.num();

	Cmember yo("22424", "김김", "연산");
	yo.print();
	yo.num();
}

