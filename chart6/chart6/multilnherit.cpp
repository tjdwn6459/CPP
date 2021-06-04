#include <stdio.h>
#include<conio.h>

//���߻��: �������� Ŭ������ ���� ����� �޴´� (���ο� Ŭ������ ���� ����� , �߰��� �����ϴ�)
class Date
{
protected:
	int year, month, day;
public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	void OutDate() { printf("%d%d%d", year, month, day); }
};

class Time
{
protected:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() { printf("%d:%d:%d", hour, min, sec); }
};

class DateTime : public Date, public Time //���߻�� -> ��ӹ��� Ŭ������  : �ڿ� ����
{
private:
	bool bEngMessage;//�޼��� ��� �� �����ϴ�
	int milisec;//�ʴ����� ������ �ð��� ����

public:
	DateTime(int y, int m, int d, int h, int min, int s, int ms, bool b = false)//��ӹ޴� ��� ������� �ʱ�ȭ
		:Date(y, m, d), Time(h, min, s)
	{
		milisec = ms;
		bEngMessage = b;
	}

	void OutNow()//outnow����Լ��� ������ ��ӹ��� outdate, outtime�Լ��� ���ʴ�� ȣ�� 
	{
		printf(bEngMessage ? "Now is" : "������ ");
		OutDate();
		_putch(' ');
		OutTime();
		printf(".%d", milisec);
		puts(bEngMessage ? "." : "�Դϴ�.");


	}
};
int main()
{
	DateTime now(2017, 6, 29, 12, 30, 58, 99);
	now.OutNow();
}