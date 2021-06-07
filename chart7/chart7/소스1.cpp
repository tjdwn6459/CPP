#include <iostream>
using namespace std;

//virtual(가상함수)
//클래쓰 public 선언, 기본클래스의 포인터 또는 참조를 통해 접근, 가상 소멸자를 가지나 생성자는 못가진다 
class CTest
{

private:
	int num;
public:
	CTest(int anum)
	{
		num = anum;
		cout << num << "CTest constructor" << endl;
	};
	virtual ~CTest()
	{
		cout << num << "CTest deconstructor" << endl;
	}
	virtual void func()
	{
		cout << "CTest function()" << endl;
	}


};

class CTestSub : public CTest
{
private:

	int subN;

public:
	CTestSub(int anum, int asubN) : CTest(anum)
	{
		subN = asubN;
		cout << subN << "CTest constructor" << endl;
	};

	~CTestSub() {//파괴자는 따로 매개변수 필요 없다 
		cout << subN << "CTestSub destructor" << endl;
	}

	void func() {
		cout << "CTestSub function()" << endl;
	}
};
int main()
{
	CTest b(10);//객체를 만들고
	b.func();// 함수 호출

	CTestSub d(20, 20);//서브클레스의 생성자 호출 
	d.func();

	CTest* pb = new CTestSub(30, 33); //추상자료형으로 자식 객체를 가리키게 한다, 메모리 동적할당 받은 sub클래스에 파괴자가 호출이 안된다  
	pb->func();

	//delete pb;//메모리 해제

	return 0;
}

