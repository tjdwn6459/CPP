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
	const MyTest operator+(const MyTest& other)const
	{
		MyTest res;//네번째 객체 생성자 호출
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;//리턴해주면 (임시객체가 만들어져서) RES가 가진 멤버변수의 값들이 복사
	}

	friend const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2);//클래스와 친구를 맺으면 (클래스에서 전역함수 사용가능)->멤버를 읽기 위해 
	//const MyTest& operator=(const MyTest& other)
	//{
	//	//MyTest res;
	//	x = other.x;//<-매개변수로 가지는 x값에 대입한다 
	//	y = other.y;
	//	return *this;
	//}
	void printData()
	{
		printf("a : %d, b = %d", x, y);
	}
};

const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2)//-> 클래스 외부에서 작성(인수 2개를 전달)
{
	MyTest res;
	res.x = rhs1.x - rhs2.y;
	res.y = rhs1.y - rhs2.y;

	return res;
}

int main()
{
	MyTest obj1(10, 20);//객체가 생성
	MyTest obj2(20, 10);//두번째 객체 생성
	MyTest obj;//객체가 만들어지면서 생성자 호출

	obj = obj1 + obj2;//=기본적으로 연산이 가능하게끔 컴파일러가 제공해주는것이다 
	obj.printData();
	/*obj = obj1.operator=(obj2);*/
	obj = operator-(obj1, obj2);
	obj.printData();



	return 0;
}