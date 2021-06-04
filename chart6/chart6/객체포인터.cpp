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
	//부모포인터는 자식을 가리킬수 있다 (접근가능)
	//but, 실질적으로 가리키는 자식객체에 따라서 포인터가 가리키는 범위 안에서만 사용이 가능하다
	//(포인터 타입에 따라서 객체에 접근 가능)

	A* pa = new C;//기초 클래쓰 타입의 포인터가 파생객체를 가리키고 있다(부모 -> 자식) 
	pa->AFunc();//포인터가 가리키는 것만 실질적으로 사용 할 수 있다
	/*C* pcc = new A;*///자식 포인터가 부모의 객체를 가리키는 형태는 안된다
	B* pb = new C;//pb는 C의 객체를 가리킬수는 있으니 실질적으로 사용이 가능한거는 B의 객체와 부모인 A를 사용할수 있다 
	pb->AFunc();
	pb->BFunc();
	C* pc = new C;
	pc->AFunc();
	pc->BFunc();
	pc->CFunc();


	return 0;
}