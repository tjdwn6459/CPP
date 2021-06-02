#include <stdio.h>

class MathCalc
{
private:
	static const double pie ;//정적으로 만들었다 (클래스 밖에서 초기화 시키는것이 원칙)
	static const int sint = 3;//static에 const를 붙이면 class안에서 초기화 가능 단, 정수만
public:
	MathCalc(){}
	void DoCalc(double r) {
		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pie);
	}
};

const double MathCalc::pie = 3.1416;//값 초기화


int main()
{
	MathCalc m;
	m.DoCalc(5);


}