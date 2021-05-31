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
	printf("이름은 %s입니다.\n", Name);
	free(Name);*/


	//동일하게 변수 a를가리키는 형태를 취하고 있다
	int a = 10;
	int& ra = a;
	int* pa = &ra;
	printf("%p %p %p/n", &a, &ra, pa);

}