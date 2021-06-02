#include <stdio.h>

//
class Simple
{
private:
	 int value;
public:
	Simple(int avalue) : value(avalue) {}//상수는 선언과 동시에 초기화를 해줘야해서 생성자의  머리에서 초기화 해준다


	void OutValue() {
		printf("value = %d\n", value);
	}
};

int main()
{
	Simple A(1), B(2);
	A.OutValue();
	B.OutValue();


}



