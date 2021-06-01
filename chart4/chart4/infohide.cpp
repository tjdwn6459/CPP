#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:

	//�������� �μ��� 3���� �޴´� 
	Time(int h, int m, int s)
	{
		SetHour(h);//h��� �μ��� ������ �Լ��� ȣ��
		SetMinute(m);//m�̶�� �μ��� ������ �Լ��� ȣ��
		sec = s; //sec�� s�� ����
	}

	int GetHour() { return hour; }//private�� ���������� �о���� ���ؼ� get�Լ� ��� 


	//���� ���� h�� ������ 
	void SetHour(int h) {
		if (h >= 0 && h < 24) {//������ ���� ��Ű��
			hour = h;//hour��� ��� ������ ����
		}
	}

	int GetMinute() { return min; }

	void SetMinute(int m) {
		if (m >= 0 && m < 60) {
			min = m;
		}
	}

	int GetSecond() { return sec; }

	void OutTime() {
		printf("���� �ð��� %d:%d:%d�Դϴ� \n", hour, min, sec);
	}
};

int main()
{

	Time now(12, 34, 56); //3���� �μ��� �������ش� -> ������ ȣ��
	now.SetHour(40);//now��� ������ sethour�� �μ� '40'�� ���� ���ش� 
	now.OutTime();//�������ִ� ���� ������ �Լ��� ȣ�� �� ���
	now.SetHour(9);//�μ� '9'�� �Լ��� ���� 
	now.OutTime();
}