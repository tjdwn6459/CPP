#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "cursor.h"

class Point
{
protected:
	int x, y;
	char ch;
public:
	Point(int ax, int ay, char ach)

	{
		x = ax; y = ay; ch = ach;
	}
	void show()
	{
		gotoxy(x, y); _putch(ch);
	}
	void hide()
	{
		gotoxy(x, y); _putch(' ');
	}
	void move(int nx, int ny)
	{
		hide();
		x = nx;
		y = ny;
		show();
	}
};
class Circle : public Point//상속
{
protected:
	int radius;
public:
	Circle(int ax, int ay, char ach, int arad) : Point(ax, ay, ach)
	{
		radius = arad;
	}

	void show()
	{
		for (double a = 0; a < 360; a += 10)
		{
			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
			_putch(ch);
		}
	}

	void hide()
	{
		for (double a = 0; a < 360; a += 10)
		{
			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
			_putch(ch);
		}
	}
};
int main()
{
	//객체를 생성하여 move함수를 호출해 점을 이동시킨다 hide함수로 이전 위치의 점을 지우고 새좌표로 갱신하고 show함수로 다시 그린다 
	Point p(1, 1, 'P'); //점객체 P 생성
	Circle c(20, 10, 'C', 12);//원 객체 'C'생성

	p.show();
	c.show();

	_getch();
	p.move(40, 1);
	_getch();
	c.move(40, 10);//원은 (40, 10)로 옮겨야하는데 점의 위치만 옮겨진다 
	_getch();
}