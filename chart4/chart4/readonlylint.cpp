#include <stdio.h>
#include <Windows.h>

class MathCalc
{
private:
	const double pie;

public:
	MathCalc(double apie) : pie(apie){}
	void DoCalac(double r) {
		printf("������ %.2f�� ���� �ѷ� = %.2f\n", r, r * 2 * pie);
	}
};

int main()
{
	MathCalc m(3.1416);
	m.DoCalac(5);
}