#include <stdio.h>

//가상파괴자 
class Base
{
private:
	char* B_buf;

public:
	Base() { B_buf = new char[10]; puts("Base 생성"); }
	virtual ~Base() { delete[] B_buf; puts("Base 파괴 "); }//파괴자는 정적 결합을 하기에 가상으로 선언해야한다 그렇지 않으면 메모리 해제가 안되 메모리 누수 발생 
};
class Derived : public Base
{
private:
	int* D_buf;
public:
	Derived() { D_buf = new int[32]; puts("Derived 생성"); }
	virtual ~Derived() { delete[] D_buf; puts("Derived 파괴"); }
};

int main()
{

	Base* pB;//포인터를 통해 가상함수에 접근 
	pB = new Derived;//pB라는 객체에 새로운 derived클래쓰를 생성 
	delete pB;//객체가 파괴될때에는 제일 나중에 생성된게 제일 먼저 파괴 된다 
}