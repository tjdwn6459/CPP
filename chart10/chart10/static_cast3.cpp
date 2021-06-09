#include <iostream>

using namespace std;
class Base {
	int data;
public:
	Base() {};//������
	~Base() {};//�ı���

	void setData(int adata) {//�����ڿ��� �ʱ�ȭ �ȴ�� ���� �ʱ�ȭ �����
		data = adata;
	}
	int getData()
	{
		return data;
	}
};
class Derive : public Base//Base�� ��ӹ޴� Ŭ���� ����
{
public:
	void setData(int adata) {

		if (adata > 0) adata = 0;
		Base::setData(adata);
	}

	void printData() {
		cout << "printData() : " << getData() << endl;
	}
};

int main()
{
	Base* pb = new Derive;//�θ��� �����͸� ���� �ڽ��� ����Ŵ
	Derive* pd = NULL;

	pb->setData(10);//10�� �ʱ�ȭ
	/*pb->prinData();*/
	pd = static_cast<Derive*>(pb);//(�ڽ�)derive ����ƮŸ������ ����ȯ-> �ڽ� Ÿ���� ��ü�� ����Ų��
	pd->setData(20);//�Ļ�Ŭ������ �Լ��� ����Ǿ� ���� �ٲ۴� 
	pd->printData();


	return 0;
}