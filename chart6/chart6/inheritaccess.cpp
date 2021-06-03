#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
protected://멤버 접근지정자-> 상속받은 것은 사용가능
	char name[12];
	int age;

public://모두 접근 가능 
	Human(const char* aname, int aage) {
		strcpy_s(name, aname);
		age = aage;

	}

	void intro()
	{
		printf("이름= %s, 나이 = %d\n", name, age);
	}
};
class Student : public Human//student클래쓰가 Human한테서 상속 받음
{
protected://상속받았을때 사용하는 접근 지정자 
	int stunum;
public:
	Student(const char* aname, int aage, int astumum) : Human(aname, aage)
	{
		stunum = astumum;
	}

	void study()//자식클래쓰 내부에서만 있기때문에 부모클래쓰에서는 사용이 불가능
	{
		printf("이이는 사 이사 팔\n");
	}

	void report()
	{
		//생성자에서 부모의 클래쓰를 상속받았으니까 멤버함수를 사용가능하다 
		printf("이름 = %s, 학번 :%d 보고서 제출합니다.", name, stunum);
	}
};

int main()
{
	Student kim("안성주", 26, 3424242);
	kim.intro();
	kim.study();
	kim.report();


}