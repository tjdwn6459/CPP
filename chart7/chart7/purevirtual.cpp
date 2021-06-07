#include <stdio.h>


//순수 가상함수가 포함되어있는 클래스가 가상 클래쓰
class Shape
{
public:
	virtual void draw() = 0;//SHAPE 불완전하지만 추상클래쓰로 부터 구체적인 클래쓰 파생하려면 반드시 가상함수 구현!
};
class Line : public Shape //lINE동작 가능한 객체 생성
{
public:
	virtual void draw() { puts("선을 긋습니다"); }
};
class Circle : public Shape//CIRCLE동작 가능한 객체 생성
{
public:
	virtual void draw() { puts("동그라미 그렸다 치고"); }
};
class Rect : public Shape//RECT동작 가능한 객체 생성
{
public:
	virtual void draw() {
		puts("요건 사각형");
	}
};
int main()
{
	Shape* pS[3];//SHAPE동작이 불완전해 객체를 생성할 수 는 없지만 객체를 가리키는 포인터나 포인터 배열은 선언이 가능

	pS[0] = new Line;
	pS[1] = new Circle;
	pS[2] = new Rect;

	for (int i = 0; i < 3; i++)
	{
		pS[i]->draw();//해당 방의 클래쓰안에 있는 함수 의 값 출력
	}

	for (int i = 0; i < 3; i++)
	{
		delete pS[i];//메모리 동적 할당 후 (해제!!!!!!!!!!)
	}



}