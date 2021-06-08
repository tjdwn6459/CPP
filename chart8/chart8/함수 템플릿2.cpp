#include <iostream>
using namespace std;

//내부에서 선언하고 외부에서 사용할 경우
template <typename T>
class CTest {
private:
	T num;

public:
	/*CTest(T anum) : num(anum) {};*///콜론 초기화
	CTest(T);//선언
	void printData() {
		cout << "num : " << num << endl;
	}
};
template <typename T>
CTest<T>::CTest(T anum) {//클래스 내부에서 생성을 하고 외부에서 정의를 할 수 있다(템플릿 타입으로 쓰기에 자료형 명시!)

}

int main()
{
	/*CTest obj(10);*/
	CTest<int>obj(10);//-> 클래쓰에서 타입의 이름을 생략해서는 안된다
	obj.printData();


	return 0;
}