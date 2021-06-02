#include <stdio.h>

class StaticTest {
public:

	int a;
	static int b; //static 멤버 변수 선언
	StaticTest() {
		a = 10;
//		b = 20;  //클래스 내부에서는 초기화 안된다 
		b++; //생성자 호출될때마다 1씩증가
	}
	void getData()
	{
		printf("a: %d\n, b : %d\n", a, b);
	}
};
int StaticTest::b = 20;//static 멤버변수 초기화

int main()
{
	StaticTest s1;
	s1.getData();
	StaticTest s2;
	s2.getData();

	return 0;
}