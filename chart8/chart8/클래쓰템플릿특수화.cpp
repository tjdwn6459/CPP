//클래스 템플릿 특수화-> 특정 자료형에 대해서는 다르게 구분이 되는 템플릿 클래쓰의 객체를 생성하기 위해서 
#include <iostream>
using namespace std;

template <typename T>
class CTest
{
private:
	T data;
public:
	CTest(T adata) : data(adata) {};
	T getData()
	{
		return data;
	}
};
template <>
//특수화
class CTest<char> {//CTest클래스 템플릿을 char에 대해 특수화 시킴
private:
	char data;
public:
	CTest(char adata) : data(adata) {};
	char getData()
	{
		return data;
	}
};
int main()
{

	CTest<int> obj1(10);
	cout << obj1.getData() << endl;
	CTest<char> obj2('a');
	cout << obj2.getData() << endl;

	return 0;
}
	