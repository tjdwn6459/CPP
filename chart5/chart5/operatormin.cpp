#include <iostream>

class MyTest {

private:
	int x;
	int y;

public:

	MyTest(int a = 0, int b = 0) {
		x = a;
		y = b;

		printf("인수 2개 생성자!! \n");
	}

	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y) {
		printf("복사 생성자 호출 !!");
	}
	
	const MyTest& operator-(const MyTest& other)const
	{
		MyTest res;
		res.x = this->x - other.x;
		res.y = this->y - other.y;
		return res;
	}

	void printData()
	{
		printf("a = %d, b = %d", x, y);
	}
};


int main()
{
	MyTest obj1(30, 20);
	MyTest obj2(20, 10);
	MyTest obj;

	obj = obj1 - obj2;
	obj.printData();



	return 0;
}