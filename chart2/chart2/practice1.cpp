#include <iostream>

struct Human //구조체는 멤버 접근 지정자가 public
{
	char name[20];
	float height;
	float weight;
	int age;
	char blood;
	void view();//함수의 원형이 클래스 내부에 위치한다

};

void Human::view()//내부에 있는 걸 밖으로 끄낼때는 ->범위 지정 연산자를 사용해여 클래스에 소속된지 알 수 있다 
{
	printf("나의 이름은 %s 이고 키는 %f이고 몸무게는 %f이고 니이는 %d 이고 혈액형은 %c입니다.", name, height, weight, age, blood);
}

int main()
{

	Human my = { "홍길동", 182, 78, 40, 'B' };
	my.view();
	return  0;
}