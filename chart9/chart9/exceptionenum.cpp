#include <stdio.h>
enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL };
void report() throw(E_Error)
{
	if (true)throw OVERRANGE;
}
int main()
{
	try {
		report();
		puts("�۾��Ϸ�");
	}
	catch (E_Error e)
	{
		switch (e) {
		case OUTOFMEMORY:
			puts("�޸𸮰� �����մϴ�.");
			break;
		case OVERRANGE:
			puts("���� ���� �ʰ�");
			break;
		case HARDFULL:
			puts("�ϵ� ��ũ�� ����á���ϴ�.");
			break;

		}
	}
}