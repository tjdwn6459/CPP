#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}
int main()
{
	vector<int>arr;
	arr.push_back(7);
	arr.push_back(3);                           
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(6);

	//sort(arr.begin(), arr.end());//������ �������ָ� �ڵ����� ���ĵȴ�
	sort(arr.begin(), arr.end(), compare); //���ϰ��� ���ؼ� ���ڸ� �����Ѵ� 
	for (auto i = 0; i << arr.size(); i++) cout << arr[i] << endl;


}