#include <iostream>
//완전한 cast은 부모가 자식을 가리키는 형태가 되어야한다 
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
void globalfunc(A& a) //전역함수{
try
{
	C& c = dynamic_cast<C&>(a);//a라는 객체가 부모를 가리키다 
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
	C* pc = dynamic_cast<C*>(paa);//자식이 부모를 가리키다(문법상으로 오류 발생)-> 불완전한 casting
	if (pc)pc->test2();

	C c;
	globalfunc(c);
	B b;
	globalfunc(b);
	return 0;
}