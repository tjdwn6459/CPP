#include <stdio.h>

class Some {
private:
	mutable int temp;//멤버 변수 선언

public:
	Some(){}
	void method()const {//const상수화 시키면 값을 변경이  안되지만 mutable쓰면 가능하다
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