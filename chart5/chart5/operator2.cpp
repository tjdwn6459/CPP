#include <iostream>

class MyTest {

private:
	int x;
	int y;

public:

	MyTest(int a = 0, int b = 0) {//전달받은 인수를 집어 넣기 
		x = a;
		y = b;

		printf("인수 2개 생성자!! \n");
	}

	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y) {
		printf("복사 생성자 호출 !!");
	}
	//sum이라는 멤버 함수 만들기 
	const MyTest& operator+(const MyTest&other)const
	{
		MyTest res;//네번째 객체 생성자 호출
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;//리턴해주면 (임시객체가 만들어져서) RES가 가진 멤버변수의 값들이 복사
	}

	void printData()
	{
		printf("a : %d, b = %d", x, y);
	}
};


int main()
{
	MyTest obj1(10, 20);//객체가 생성
	MyTest obj2(20, 10);//두번째 객체 생성
	MyTest obj;//객체가 만들어지면서 생성자 호출

	obj = obj1 + obj2;
	obj.printData();

	

	return 0;
}