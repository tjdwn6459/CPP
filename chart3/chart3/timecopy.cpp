#include <stdio.h>


//���� ������ -> ��ü�� ���簡 �̷���� �� ȣ��Ǵ� �������̴�
class Time
{
private:
	int hour, min, sec;

public://���� ���� ������ ���� 
	Time(int h, int m, int s) { //Ŭ������ �����Ұ�ü (�̹� ������ ��ü)
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() {
		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
	}
};

int main()
{
	Time now(12, 34, 56);//timeŬ������ now��ü�� �����(�μ�3���� ���� ������ ȣ��) ���� hour, min, sec�� ����
	//Time then = now; //then�����ؼ� ��ü ����
	Time then(now); //now��� ��ü�� ����� �̸� then�̶�� ��ü�� �����Ѵ� 


	then.OutTime();//then�� �Լ�outtimeȣ���ϸ� �� �ش簪�� ������ ����Ǿ� ����Ѵ� 
}