#include <iostream>
using namespace std;

template <typename T, int sz = 3>
class CTest
{
private:
	T ary[sz];

public:
	T& operator[](int idx)
	{
		if (idx < 0 || idx >= sz)
		{
			cout << "error" << endl;
			exit(1);
		}

		return ary[idx];
	}
	void getData()
	{
		for (int i = 0; i < sz; i++)
		{
			cout << ary[i] << endl;
		}
	}
};

int main()
{
	CTest<int, 3> arr; //���� 3 ���� ������int���� �迭
	arr[0] = 10; //arr[0] = 10;->�������� (������ �����ε�)
	arr[1] = 20;
	arr[2] = 30;
	arr.getData();
	return  0;
}