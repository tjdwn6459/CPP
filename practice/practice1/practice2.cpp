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
		printf("�̸� :%s, ���� : %d\n", name, age);
	}


};

int main(char *pname, int aage)
{
	Human i;
	char tempName[100];
	printf("�̸��� �Է��ϼ��� : ");
	cin >> tempName;
	i.setName();
	i.getName();
	
	return 0;


}
