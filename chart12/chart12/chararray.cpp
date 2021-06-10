#include <iostream>
#include <string>
using namespace std;

int main()
{


	string s("char array");
	string s2("C++ string");

	cout << s.data() << endl;
	cout << s.c_str() << endl;

	char str[128];
	strcpy(str, s.c_str());
	printf("str = %s\n", str);

	swap(s, s2);//swap라는 인수를 전달해주면 자동으로 바뀌게 된다
	cout << s << endl;
}