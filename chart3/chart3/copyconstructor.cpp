#include <stdio.h>
#include <string.h>

class Human {
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
	}
	//���� ������-> boy�� kang�� ���� �ٸ����� kang�� �μ��� ����ϱ����ؼ� ��������ڸ� ȣ���ϰ� 
	Human(const Human &other) { //�μ��� ��ü�� ����Ҷ� �Ű������� ���̴µ� ->���۷��� Ÿ�����λ��
		pname = new char[strlen(other.pname) + 1];//�޸� �����Ҵ��� �޴´�
		strcpy(pname, other.pname);//���ڿ��� ����
		age = other.age;
	}

	//�ı���-> ������ ���̶� ������Ϳ� ���� �� �վ� �ı��ڸ� ������ �Ѵ� 
	~Human() {
		delete[]pname; //�޸� ���� 
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", pname, age);
	}
};
void printHuman(Human who)
{
	who.intro();
}
int main()
{
	Human kang("������", 1424);//�μ� 2���� �����ϴ� ������ ȣ�� 
	Human boy = kang;//boy�� kang�� ������ �ִ´� 

	printHuman(boy);
}