#include <stdio.h>

class Human
{
public:
	char name[12];
	int age;

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{

	Human arFriend[10] = {//human이라는 class의 객체arfriend 배열
		{"문동욱", 49},
		{"김유진", 49},
		{"박상막", 49}
	};

	Human* pFriend;
	pFriend = &arFriend[1];//1번방의 주솟값을 가리킨다 
	pFriend->intro(); //포인터로 멤버함수 호출 ->


}