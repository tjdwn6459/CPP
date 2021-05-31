#include <iostream>
using namespace std;


void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}




int main()
{
	int i, j;
	cout << "숫자를 입력하세요 : ";
	cin >> i;
	cin >> j;
	swap(i, j);
	cout << "바뀐값 : " << i << "," << j << endl;



}