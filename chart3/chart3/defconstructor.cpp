#include <stdio.h>
#include <string.h>

//����Ʈ ������ -> �μ��� ������ �ʴ� ������
class Human
{
private://���������θ� ����ϴ� ��� (�ܺο��� ���� �Ұ���)
	char name[12];
	int age;

public://�ܺη� �����Ǿ� �Լ��� �����Ӱ� ȣ�� ����
	Human() {//()�μ��� ���� 
		strcpy(name, "�̸�����"); //name ��  "�̸�����"���� �ʱ�ȭ
		age = 0; //age�� 0���� ���� �ʱ�ȭ
	}
	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human momo;//(Ŭ������ + ��ü������)��ü ����
	momo.intro();
}