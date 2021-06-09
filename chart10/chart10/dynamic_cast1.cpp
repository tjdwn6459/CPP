#include <iostream>
//������ cast�� �θ� �ڽ��� ����Ű�� ���°� �Ǿ���Ѵ� 
class A
{
public:
	virtual void test() { printf("A::test()\n"); }
};
class B : public A
{
public:
	void test() { printf("B::test()\n"); }
	void test2() { printf("B::test2()\n"); }

};
class C : public B
{
public:
	virtual void test() { printf("C::test()\n"); }
	void test2() { printf("C::test2()\n"); }
};
void globalfunc(A& a) //�����Լ�{
try
{
	C& c = dynamic_cast<C&>(a);//a��� ��ü�� �θ� ����Ű�� 
	printf("globalfunc()");
}
catch (std::bad_cast)
{
	printf("casting error");
}
int main()
{
	A* pa = new C;
	A* paa = new B;
	pa->test();
	B* pb = dynamic_cast<B*>(pa);
	if (pb)pb->test2();
	C* pc = dynamic_cast<C*>(paa);//�ڽ��� �θ� ����Ű��(���������� ���� �߻�)-> �ҿ����� casting
	if (pc)pc->test2();

	C c;
	globalfunc(c);
	B b;
	globalfunc(b);
	return 0;
}