#include <stdio.h>

class MathCalc
{
private:
	static const double pie ;//�������� ������� (Ŭ���� �ۿ��� �ʱ�ȭ ��Ű�°��� ��Ģ)
	static const int sint = 3;//static�� const�� ���̸� class�ȿ��� �ʱ�ȭ ���� ��, ������
public:
	MathCalc(){}
	void DoCalc(double r) {
		printf("������ %.2f�� ���� �ѷ� = %.2f\n", r, r * 2 * pie);
	}
};

const double MathCalc::pie = 3.1416;//�� �ʱ�ȭ


int main()
{
	MathCalc m;
	m.DoCalc(5);


}