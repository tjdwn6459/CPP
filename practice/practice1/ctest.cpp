#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class CTest {


private:
	int m_num;
	int* ptr;
public:
	CTest() {//CTest c1(100)위해 default 아무런 인수를 전달 받지않는 타입의 객체 생성 가능
		printf("디폴트 생성자 !!\n");
	};

	CTest(int num) {//인수를 하나가지는 생성자(변환 생성자)->값을 변환해 private에 접근 
		m_num = num; //m_num에 전달되는 num을 집어 넣어라
		printf("생성자 호출 : %d\n", m_num);
	}

	CTest(int num, int* ptr) {//인자2개를 생성하기 위한 생성자
		this->m_num = num;
		this->ptr = new int;//메모리 동적할당 받고 시작주소를 저장
		this->ptr = ptr;//메모리 동적할당을 받았으니 ptr저장
		printf("인자 두개  생성자 호출 !! : %d, %p", m_num, ptr);
	}

	//복사 생성자
	CTest(CTest &other) {//인수로 객체를 사용 -> (복사 생성자 호출)1)매개변수2)리턴3)복사
		this->m_num = other.m_num;
		this->ptr = new int;//동적 할당
		this->ptr = ptr;
		printf("복사 생성자 호출 ! : %d, %p\n", m_num, ptr);
	}

	//파괴자 -> 프로그램이 끝나면 자동으로 호출된다 
	~CTest() {
		delete ptr;//동적할당의 경우 소멸자에서 해제
	}
	void getData() {
		printf("%d\n", m_num);
	}
};



int main()
{
	/*기본자료형*/
	int a = 10;
	int b(20);//CPP에서 제공하는 초기화 타입
	int c(a);//복사 생성자 


	printf("%d, %d, %d\n", a, b, c);

	/*사용자 자료형*/

	//인수 1개의 생성자 호출 
	CTest c1(100);//100의 인수(한개)를 사용하기위해 생성자를 자동으로 호출

	CTest c2;//디폴트 생성자 호출

	//복사 생성자 호출(얕은 복사)
	CTest c3(c1);// - 주소를 복사한다(참조를 전달받기 때문에)
	//-> 자동적으로 복사기능을 하는 컴파일러를 호출

	//인수 2개 생성자 호출 
	CTest c4(50, nullptr);

	//복사 생성자 호출 
	CTest c5(c4);//깊은 복사-> 새로 메모리를 할당해 주소를 복사 

	 c3.getData();
	 c5.getData();
		
	return 0;

}

