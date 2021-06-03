#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//오버라이딩: 부모와 자식이 상속관계, 부모에서 이미 정의된함수를 같은 이름으로 자식 클래쓰에서 재정의 하는것, 
//객체에 따라 실제 호출되는 함수가 다르다 
class Human
{
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

class Student : public Human //접근지정자

{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int aastunum) :Human(aname, aage) {
		stunum = aastunum;
	}
	void study()
	{
		printf("이이는 사 \n");
	}
	void intro() {
		printf("%d학번 %s입니다 \n", stunum, name);
	}
};

int main()
{
	Human kim("안성주", 26);
	kim.intro();
	Student han("김한결", 13, 343434);
	han.intro();
    //이름과 나이를 쓰고 싶은데 함수가 부모클래쓰에 있기에 범위 지정 연산자를 통해서 (::) 함수 호출
	han.Human::intro();//오버라이딩 된함수는 범위 지정자 쓰고 
}

