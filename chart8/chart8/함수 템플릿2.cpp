#include <iostream>
using namespace std;

//���ο��� �����ϰ� �ܺο��� ����� ���
template <typename T>
class CTest {
private:
	T num;

public:
	/*CTest(T anum) : num(anum) {};*///�ݷ� �ʱ�ȭ
	CTest(T);//����
	void printData() {
		cout << "num : " << num << endl;
	}
};
template <typename T>
CTest<T>::CTest(T anum) {//Ŭ���� ���ο��� ������ �ϰ� �ܺο��� ���Ǹ� �� �� �ִ�(���ø� Ÿ������ ���⿡ �ڷ��� ���!)

}

int main()
{
	/*CTest obj(10);*/
	CTest<int>obj(10);//-> Ŭ�������� Ÿ���� �̸��� �����ؼ��� �ȵȴ�
	obj.printData();


	return 0;
}