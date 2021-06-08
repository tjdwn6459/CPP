//함수 템플릿
#include <iostream>
using namespace std;

template <typename T>
T Add(T a, T b)
{
	return a + b;
}
template<> //특수화(문자열은 일반화 처럼 사용이 안된다)
char* Add(char* lstr, char* rstr)
{
	int llen = strlen(lstr);
	int rlen = strlen(rstr);
	int len = llen + rlen + 1;//전체길이 -> 우측의 값 + 1 (null문자의 값)
	char* str = new char[len]; //문자를 저장할 객체 선언(동적할당)
	strcpy_s(str, llen + 1, lstr);
	strcpy_s(str, len, rstr);//전체의 길이에 오른쪽에 있는 문자열을 붙인다 
	return str;
}
int main()
{
	int res = Add<int>(3, 4);//5번실행(->함수인 경우: 타입을 생략해도 컴파일러가 알아서 실행 가능)
	cout << res << endl;
	const char* sres = Add<const char*>("Hello", "Iot");//10번실행
	cout << sres << endl;
	return 0;

}