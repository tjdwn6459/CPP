#include <iostream>
using namespace std;

//virtual(�����Լ�)
//Ŭ���� public ����, �⺻Ŭ������ ������ �Ǵ� ������ ���� ����, ���� �Ҹ��ڸ� ������ �����ڴ� �������� 
class CTest
{

private:
	int num;
public:
	CTest(int anum)
	{
		num = anum;
		cout << num << "CTest constructor" << endl;
	};
	virtual ~CTest()
	{
		cout << num << "CTest deconstructor" << endl;
	}
	virtual void func()
	{
		cout << "CTest function()" << endl;
	}


};

class CTestSub : public CTest
{
private:

	int subN;

public:
	CTestSub(int anum, int asubN) : CTest(anum)
	{
		subN = asubN;
		cout << subN << "CTest constructor" << endl;
	};

	~CTestSub() {//�ı��ڴ� ���� �Ű����� �ʿ� ���� 
		cout << subN << "CTestSub destructor" << endl;
	}

	void func() {
		cout << "CTestSub function()" << endl;
	}
};
int main()
{
	CTest b(10);//��ü�� �����
	b.func();// �Լ� ȣ��

	CTestSub d(20, 20);//����Ŭ������ ������ ȣ�� 
	d.func();

	CTest* pb = new CTestSub(30, 33); //�߻��ڷ������� �ڽ� ��ü�� ����Ű�� �Ѵ�, �޸� �����Ҵ� ���� subŬ������ �ı��ڰ� ȣ���� �ȵȴ�  
	pb->func();

	//delete pb;//�޸� ����

	return 0;
}

