#include <stdio.h>

//�����ı��� 
class Base
{
private:
	char* B_buf;

public:
	Base() { B_buf = new char[10]; puts("Base ����"); }
	virtual ~Base() { delete[] B_buf; puts("Base �ı� "); }//�ı��ڴ� ���� ������ �ϱ⿡ �������� �����ؾ��Ѵ� �׷��� ������ �޸� ������ �ȵ� �޸� ���� �߻� 
};
class Derived : public Base
{
private:
	int* D_buf;
public:
	Derived() { D_buf = new int[32]; puts("Derived ����"); }
	virtual ~Derived() { delete[] D_buf; puts("Derived �ı�"); }
};

int main()
{

	Base* pB;//�����͸� ���� �����Լ��� ���� 
	pB = new Derived;//pB��� ��ü�� ���ο� derivedŬ������ ���� 
	delete pB;//��ü�� �ı��ɶ����� ���� ���߿� �����Ȱ� ���� ���� �ı� �ȴ� 
}