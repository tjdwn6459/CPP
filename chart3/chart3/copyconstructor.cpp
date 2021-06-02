#include <stdio.h>
#include <string.h>

class Human {
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
	}
	//복사 생성자-> boy와 kang이 전혀 다르지만 kang의 인수를 사용하기위해서 복사생성자를 호출하고 
	Human(const Human &other) { //인수로 객체를 사용할땐 매개변수로 쓰이는데 ->래퍼런스 타입으로사용
		pname = new char[strlen(other.pname) + 1];//메모리 동적할당을 받는다
		strcpy(pname, other.pname);//문자열을 복사
		age = other.age;
	}

	//파괴자-> 복사한 값이랑 무한재귀에 빠질 수 잇어 파괴자를 만들어야 한다 
	~Human() {
		delete[]pname; //메모리 해제 
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", pname, age);
	}
};
void printHuman(Human who)
{
	who.intro();
}
int main()
{
	Human kang("강감찬", 1424);//인수 2개를 전달하는 생성자 호출 
	Human boy = kang;//boy에 kang의 변수를 넣는다 

	printHuman(boy);
}