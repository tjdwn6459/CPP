#include <stdio.h>

struct SHuman
{
private:
	char name[12];
	int age;

public://멤버

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	SHuman kim;//kim이라는 객체 생성
	//kim.age = 26 외부에서 멤버 변수를 읽어올 수 없다
	kim.intro();


}