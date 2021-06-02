#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class CTest {


private:
	int m_num;
	int* ptr;
public:
	CTest() {//CTest c1(100)���� default �ƹ��� �μ��� ���� �����ʴ� Ÿ���� ��ü ���� ����
		printf("����Ʈ ������ !!\n");
	};

	CTest(int num) {//�μ��� �ϳ������� ������(��ȯ ������)->���� ��ȯ�� private�� ���� 
		m_num = num; //m_num�� ���޵Ǵ� num�� ���� �־��
		printf("������ ȣ�� : %d\n", m_num);
	}

	CTest(int num, int* ptr) {//����2���� �����ϱ� ���� ������
		this->m_num = num;
		this->ptr = new int;//�޸� �����Ҵ� �ް� �����ּҸ� ����
		this->ptr = ptr;//�޸� �����Ҵ��� �޾����� ptr����
		printf("���� �ΰ�  ������ ȣ�� !! : %d, %p", m_num, ptr);
	}

	//���� ������
	CTest(CTest &other) {//�μ��� ��ü�� ��� -> (���� ������ ȣ��)1)�Ű�����2)����3)����
		this->m_num = other.m_num;
		this->ptr = new int;//���� �Ҵ�
		this->ptr = ptr;
		printf("���� ������ ȣ�� ! : %d, %p\n", m_num, ptr);
	}

	//�ı��� -> ���α׷��� ������ �ڵ����� ȣ��ȴ� 
	~CTest() {
		delete ptr;//�����Ҵ��� ��� �Ҹ��ڿ��� ����
	}
	void getData() {
		printf("%d\n", m_num);
	}
};



int main()
{
	/*�⺻�ڷ���*/
	int a = 10;
	int b(20);//CPP���� �����ϴ� �ʱ�ȭ Ÿ��
	int c(a);//���� ������ 


	printf("%d, %d, %d\n", a, b, c);

	/*����� �ڷ���*/

	//�μ� 1���� ������ ȣ�� 
	CTest c1(100);//100�� �μ�(�Ѱ�)�� ����ϱ����� �����ڸ� �ڵ����� ȣ��

	CTest c2;//����Ʈ ������ ȣ��

	//���� ������ ȣ��(���� ����)
	CTest c3(c1);// - �ּҸ� �����Ѵ�(������ ���޹ޱ� ������)
	//-> �ڵ������� �������� �ϴ� �����Ϸ��� ȣ��

	//�μ� 2�� ������ ȣ�� 
	CTest c4(50, nullptr);

	//���� ������ ȣ�� 
	CTest c5(c4);//���� ����-> ���� �޸𸮸� �Ҵ��� �ּҸ� ���� 

	 c3.getData();
	 c5.getData();
		
	return 0;

}

