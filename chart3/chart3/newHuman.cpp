#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
class Human
{
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
		printf("== <%s>객체 생성 ==\n", pname);
	}

	~Human() {
		printf("==<%s> 객체가 파괴 ==\n", pname);
		delete[]pname;
	}


	void intro() {
		printf("이름= %s, 나이 =%d\n", pname, age);
	}
};

int main()
{

	Human boy("김수한무거북이와두루미", 12);
	boy.intro();

	Human* leo;//human 클래쓰에서 포인터 객체 leo생성->새로운 human의 인스턴스
	leo = new Human("레오나르도 디카프리오 ", 40); //leo포인터에new human을 가리키니까 생성자를 쓸 수ㅠ있다 
	leo->intro();//->포인터로 멤버함수를 호출하기 위해서
	delete leo;//동적할당했기에 소멸자 호출이 안된다 
}