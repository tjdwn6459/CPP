#include "cursor.h"
#include <iostream>
using namespace std;

template<typename T>
class PosValue
{
private:
	int x, y;
	T value;

public:
	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av){}

	void outvalue()
	{
		gotoxy(x, y);
		cout << value << endl;
	}
};

int main()
{
	//class에서 template 쓸때 명시적으로 타입을 표시 해줘야 한다
	PosValue<int>iv(10, 10, 2);
	PosValue<char>cv(25, 5, 'C');
	PosValue<double>dv(30, 15, 3.14);
	iv.outvalue();
	cv.outvalue();
	dv.outvalue();
}