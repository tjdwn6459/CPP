#include <stdio.h>
#include <string.h>
using namespace std;

class Human
{
private:

	char name[12];
	int age;

public:
	void setName(char* name) {
		strcpy(this->name, name);
	}

	void getName()
	{
		printf("%s", name);
	}
	void intro()
	{
		printf("이름 :%s, 나이 : %d\n", name, age);
	}


};

int main(char *pname, int aage)
{
	Human i;
	char tempName[100];
	printf("이름을 입력하세요 : ");
	cin >> tempName;
	i.setName();
	i.getName();
	
	return 0;


}
