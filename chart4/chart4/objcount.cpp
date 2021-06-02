#include <stdio.h>

int count = 0;//전역변수
class Simple
{
private:
	int value;

public:
	Simple() { count++; }
	~Simple() { count--; }
	void OutCount() {
		printf("현재 객체 개수 = %d\n", count);
	}
};

int main()
{
	Simple s, * ps;//객체 1개, 포인터 ps
	s.OutCount();
	ps = new Simple;//ps를 새로운 객체로 선언
	ps->OutCount();
	delete ps;
	s.OutCount();
	printf("크기 = %d\n", sizeof(s));
}