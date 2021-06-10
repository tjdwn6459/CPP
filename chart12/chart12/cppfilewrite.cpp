#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream f;

	f.open("D:\GitRepository\CPP\chart12"); //프로그램이 실행되는 위치에 있다 
	if (f.is_open()) {
		f << "String" << 1234 << endl;
		f.close();
	}
	else
	{
		cout << "파일 열기 실패" << endl;
	}


}