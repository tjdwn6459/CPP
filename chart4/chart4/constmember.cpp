#include <stdio.h>

class Enemy
{
private:
	const int Speed; //생성자 호출

public:
	Enemy(int aSpeed): Speed(aSpeed){}//매개변수가 하나라 변환생성자 역할을 한다
	void Move() {
		printf("%d의 속도로 움직인다 \n", Speed);
	}
};

int main()
{
	Enemy e1(10), e2(20);
	e1.Move();
	e2.Move();



}