#include <stdio.h>

class Human
{
public:
	char name[12];
	int age;

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human kim = { "김상형", 29 };
	kim.intro();
}