#include <stdio.h>
#include <malloc.h>
#include <string.h>

void InputName(char*& Name)
{
	Name = (char*)malloc(32);
	strcpy(Name, "kim sang hyung");
}

int main()
{
	/*char* Name;

	InputName(Name);
	printf("�̸��� %s�Դϴ�.\n", Name);
	free(Name);*/


	//�����ϰ� ���� a������Ű�� ���¸� ���ϰ� �ִ�
	int a = 10;
	int& ra = a;
	int* pa = &ra;
	printf("%p %p %p/n", &a, &ra, pa);

}