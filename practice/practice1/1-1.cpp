#include <stdio.h>

class member
{
private:
	int a;
	int b;

public:
	member(int x = 0, int y = 0)
	{
		a = x;
		b = y;
	}

	const member add(const member& other)const
	{
		member sum;
		sum.a = a + other.a;
		sum.b = b + other.b;
		return sum;
	}

	void print()
	{
		printf(" a: %d b : %d", a, b);
	}
};

int main()
{
	member m1(10, 20);
	member m2(30, 40);
	member res;

	res = m1.add(m2);
	res.print();

	return 0;




}