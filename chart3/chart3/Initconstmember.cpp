#include <stdio.h>

class Some
{
public:
	const int total;//상수화 정적데이터 영역에 저장 total
	Some(int atotal) : total(atotal){}
	/*Some(int total) { 일반적인 대입연산을 통한 초기화 방식은 안된다
		total = atotal;
	}*/
	void OutTotal()
	{
		printf("%d\n", total);
	}
};

int main()
{
	Some S(5);
	S.OutTotal();
}