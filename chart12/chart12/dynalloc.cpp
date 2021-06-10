#include <iostream>
#include <memory>
using namespace std;

int main()
{

	auto_ptr<double> rate(new double);//사용자가 해제 안해도 자동으로 해쥼
	
	*rate = 3.1415;
	cout << *rate << endl;
}