#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s)
	{
		SetTime(h, m, s);
	}

	void SetTime(int h, int m, int s) //�Ϲ����� ����Լ� Ÿ��
	{
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime()const {//outtime��� �Լ��� ���ȭ ->��������� �ǵ��� ����(��ȯ�� �ȴ��)
		printf("����ð��� %d:%d:%d�Դϴ� \n", hour, min, sec);

		//hour = 24;//hour�� ���� �����Ű�� ������ �ȵȴ�
	}
};

int main()
{
	Time now(12, 34, 56);//Ŭ������ �ν��Ͻ��� �����ϵ� ���� ������ 
	now.SetTime(11, 22, 33);
	now.OutTime();

	const Time metting(16, 00, 00);//metting��ü�� ���ȭ  �Ѵ�->���ȭ ��Ų ��� �Լ��� ����� ����(�Ϲ� ��������� ���ȴ��)
	
	metting.OutTime();//�������Լ� 


}