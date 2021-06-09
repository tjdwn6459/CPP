#include <iostream>

using namespace std;
class Base {
	int data;
public:
	Base() {};//생성자
	~Base() {};//파괴자

	void setData(int adata) {//생성자에서 초기화 안대면 따로 초기화 만들기
		data = adata;
	}
	int getData()
	{
		return data;
	}
};
class Derive : public Base//Base를 상속받는 클래쓰 생성
{
public:
	void setData(int adata) {

		if (adata > 0) adata = 0;
		Base::setData(adata);
	}

	void printData() {
		cout << "printData() : " << getData() << endl;
	}
};

int main()
{
	Base* pb = new Derive;//부모의 포인터를 통해 자식을 가리킴
	Derive* pd = NULL;

	pb->setData(10);//10을 초기화
	/*pb->prinData();*/
	pd = static_cast<Derive*>(pb);//(자식)derive 포인트타입으로 형변환-> 자식 타입의 객체를 가리킨다
	pd->setData(20);//파생클래쓰의 함수가 실행되어 값을 바꾼다 
	pd->printData();


	return 0;
}