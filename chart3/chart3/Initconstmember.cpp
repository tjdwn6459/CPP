#include <stdio.h>

class Some
{
public:
	const int total;//���ȭ ���������� ������ ���� total
	Some(int atotal) : total(atotal){}
	/*Some(int total) { �Ϲ����� ���Կ����� ���� �ʱ�ȭ ����� �ȵȴ�
		total = atotal;
	}*/
	void OutTotal()
	{
		printf("%d\n", total);
	}
};

int main()
{
	Some S(5);
	S.OutTotal();
}