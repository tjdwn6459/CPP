#include <iostream>

class MyTest {

private:
	int x;
	int y;

public:
	//MyTest(){}
	//MyTest(int a, int b)
	MyTest(int a =0 , int b =0 ) {//default�ʱ�ȭ ->�����Ⱚ��  
		x = a; //private�� �μ��� ���������� ��� ���ϴϱ� x, y���� �����ؼ� ���
		y = b;
	}

	//sum�̶�� ��� �Լ� ����� 
	const MyTest sum(const MyTest& other)const//����Ÿ�� �Լ��� �̸� �μ� ����Լ�
	{
		MyTest res;//�ӽð�ü ���� 
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;
	}

	void printData()
	{
		printf("a : %d, b : %d", x, y);
	}
};


int main()
{
	MyTest obj1(10, 20);//������ ȣ�� 
	MyTest obj2(20, 10);//������ ȣ�� 
	MyTest obj; //���갪�� ��� 

	obj = obj1.sum(obj2);//obj = obj1 + obj2(+ ->sum�� ������)
	obj.printData();//obj�� ���� ����Ʈ �Ѵ�
	return 0;
}