#include <iostream>
using namespace std;

class A
{
public:
	void AFunc() {
		cout << "A::AFunc()" << endl;
	}
};
class B: public A
{
public:
	void BFunc() {
		cout << "B::BFunc()" << endl;
	}
};

class C : public B
{
public:
	void CFunc() {
		cout << "C::CFunc()" << endl;
	}
};
int main()
{
	//�θ������ʹ� �ڽ��� ����ų�� �ִ� (���ٰ���)
	//but, ���������� ����Ű�� �ڽİ�ü�� ���� �����Ͱ� ����Ű�� ���� �ȿ����� ����� �����ϴ�
	//(������ Ÿ�Կ� ���� ��ü�� ���� ����)

	A* pa = new C;//���� Ŭ���� Ÿ���� �����Ͱ� �Ļ���ü�� ����Ű�� �ִ�(�θ� -> �ڽ�) 
	pa->AFunc();//�����Ͱ� ����Ű�� �͸� ���������� ��� �� �� �ִ�
	/*C* pcc = new A;*///�ڽ� �����Ͱ� �θ��� ��ü�� ����Ű�� ���´� �ȵȴ�
	B* pb = new C;//pb�� C�� ��ü�� ����ų���� ������ ���������� ����� �����ѰŴ� B�� ��ü�� �θ��� A�� ����Ҽ� �ִ� 
	pb->AFunc();
	pb->BFunc();
	C* pc = new C;
	pc->AFunc();
	pc->BFunc();
	pc->CFunc();


	return 0;
}