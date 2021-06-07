#include <stdio.h>


//���� �����Լ��� ���ԵǾ��ִ� Ŭ������ ���� Ŭ����
class Shape
{
public:
	virtual void draw() = 0;//SHAPE �ҿ��������� �߻�Ŭ������ ���� ��ü���� Ŭ���� �Ļ��Ϸ��� �ݵ�� �����Լ� ����!
};
class Line : public Shape //lINE���� ������ ��ü ����
{
public:
	virtual void draw() { puts("���� �߽��ϴ�"); }
};
class Circle : public Shape//CIRCLE���� ������ ��ü ����
{
public:
	virtual void draw() { puts("���׶�� �׷ȴ� ġ��"); }
};
class Rect : public Shape//RECT���� ������ ��ü ����
{
public:
	virtual void draw() {
		puts("��� �簢��");
	}
};
int main()
{
	Shape* pS[3];//SHAPE������ �ҿ����� ��ü�� ������ �� �� ������ ��ü�� ����Ű�� �����ͳ� ������ �迭�� ������ ����

	pS[0] = new Line;
	pS[1] = new Circle;
	pS[2] = new Rect;

	for (int i = 0; i < 3; i++)
	{
		pS[i]->draw();//�ش� ���� Ŭ�����ȿ� �ִ� �Լ� �� �� ���
	}

	for (int i = 0; i < 3; i++)
	{
		delete pS[i];//�޸� ���� �Ҵ� �� (����!!!!!!!!!!)
	}



}