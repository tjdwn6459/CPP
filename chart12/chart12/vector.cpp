#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v;
	vector<int> v1 = { 1, 2, 3, 4, 5 };//1, 2, 3, 4, 5,�� ���� ���Ͱ� ����
	vector<int>v2[5];//5���� ���� ���� v2�� ���� 

	v.push_back(10); //�Ǹ������� 10�̶�� ���� �߰� ��� 
	vector<int> ::iterator iter = v.begin();//template�� �ִ� ���̺귯�� �迭�� ��� ����
	iter = v.insert(iter, 2);

	//����(�Ǹ����� ���� �ڵ� ����)
	v.pop_back();
	v.erase(v.begin() + 10);
	v.clear();//���Ϳ� �ִ� ������ ���� 

	return 0;
}
