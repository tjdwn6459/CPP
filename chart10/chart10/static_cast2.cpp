#include <stdio.h>
class Parent{};

class Child : public Parent {};

int main()
{

	Parent P, * pP;
	Child C, * pC;
	int i = 1234;

	pP = static_cast<Parent*>(&C);
	pC = static_cast<Child*>(&P);//�θ�ü �ּҸ� �ڽ��� �����Ϳ� �ִ� 
	pP = static_cast<Parent*>(&i);
	pC = static_cast<Child*>(&i);
}