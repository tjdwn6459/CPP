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
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> i;
	cin >> j;
	swap(i, j);
	cout << "�ٲﰪ : " << i << "," << j << endl;



}