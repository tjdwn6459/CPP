#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:

	Human() {
		strcpy(name, "이름없음");
		age = 0;
	}

	Human(const char* aname, int aage) {
		strcpy(name, aname);//private을 쓰기위해
		age = aage;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};
//컴파일러를 자동으로 호출해주는거 생성자, 소멸자 
int main()
{
	Human momo;
	Human arFriend[3];

	Human arFriend[3] = {
		{Human("문동욱", 49)},
		{Human("김유진", 49)},
		{Human("박상막", 49)}
	};

	arFriend[2].intro();//두번째 방에 있는 주소를 호출하면 데이터값 출력


}