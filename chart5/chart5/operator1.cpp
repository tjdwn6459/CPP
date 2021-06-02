#include <iostream>

class MyTest {

private:
	int x;
	int y;

public:
	//MyTest(){}
	//MyTest(int a, int b)
	MyTest(int a =0 , int b =0 ) {//default초기화 ->쓰레기값들  
		x = a; //private의 인수를 직접적으로 사용 못하니까 x, y에다 대입해서 사용
		y = b;
	}

	//sum이라는 멤버 함수 만들기 
	const MyTest sum(const MyTest& other)const//리턴타입 함수의 이름 인수 상수함수
	{
		MyTest res;//임시객체 생성 
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;
	}

	void printData()
	{
		printf("a : %d, b : %d", x, y);
	}
};


int main()
{
	MyTest obj1(10, 20);//생성자 호출 
	MyTest obj2(20, 10);//생성자 호출 
	MyTest obj; //연산값을 담다 

	obj = obj1.sum(obj2);//obj = obj1 + obj2(+ ->sum의 연산자)
	obj.printData();//obj의 값을 프린트 한다
	return 0;
}