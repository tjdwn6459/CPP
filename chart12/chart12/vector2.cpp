#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = { 10, 20, 30 , 40, 50 }; //int������ ����
	
	for (auto i = 0; i < v.size(); i++)cout << v[i] << ' '; //�迭����
	for (auto iter = v.begin(); iter != v.end(); iter++)cout << *iter << ' ';

	for (auto i = v.begin(); i != v.end(); i++)cout << *i << endl;


	return 0;
}