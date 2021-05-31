#include <stdio.h>
#include <string.h>

class Human
{
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];//동적할당
		strcpy(pname, aname);
		age = aage;
	}

	~Human() {
		delete[]pname;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", pname, age);
	}
};

int main()
{

	Human kang("강감찬", 1424);
	Human boy = kang; //boy에 kang의 값을 복사 

	boy.intro();
}