#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
class Human
{
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage) {//1)동적할당을 위해 생성자를 생성
		pname = new char[strlen(aname) + 1]; // pname을 동적할당 하기위해서 aname사용
		strcpy(pname, aname); //(동적할당 된걸)복사
		age = aage;
		printf("%s 객체의 생성자가 호출되었습니다. \n", pname);
	}

	~Human() {//3)소멸자 (위의 동적할당을 해제하기위해 소멸자를 생성)
		printf("%s 객체가 파괴되었습니다 .\n", pname);
		delete[]pname;//동적할당 한것만 지움 
	}


	void intro() {//2)
		printf("이름 = %s, 나이 = %d\n", pname, age);
	}
};

int main()
{
	Human boy("김수한무거북이와두루미 ", 12);//1)class가 만들어져서 호출하면 생성자 자동 호출
	boy.intro();//2)
	//3)프로그램이 끝나면 소멸자 자동 호출


}