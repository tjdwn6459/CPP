#include <stdio.h>
//�����ε� 
class Time
{
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { 1)//������1
		hour = h;
		min = m;
		sec = s;
	}

	//3)������2 (�ʸ� �ְ� �ú��ʷ� ������ ��ü�� �����ؼ� ���)
	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime() {//2), 4)
		printf("����ð��� %d:%d:%d �Դϴ� \n", hour, min, sec);
	}
};

int main()
{
	Time now(12, 30, 40);//TimeŬ������ now�ν��Ͻ� ���� (���� 3�� �����ε�)-> ������ �ڷ����̴޶� Time������ �� �� �ִ� 
	now.OutTime();
	Time noon(44000);//noon�� �ν��Ͻ� ����(���� 1�� �����ε�) 
	noon.OutTime();


}