#include <stdio.h>

class Some {
private:
	mutable int temp;//��� ���� ����

public:
	Some(){}
	void method()const {//const���ȭ ��Ű�� ���� ������  �ȵ����� mutable���� �����ϴ�
		temp = 0;
		printf("%d\n", temp);
	}
};

int main()
{

	Some s;
	s.method();

	const Some t;
	t.method();
}