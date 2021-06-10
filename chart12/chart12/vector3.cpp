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

	//sort(arr.begin(), arr.end());//범위만 지정해주면 자동으로 정렬된다
	sort(arr.begin(), arr.end(), compare); //리턴값에 대해서 숫자를 정렬한다 
	for (auto i = 0; i << arr.size(); i++) cout << arr[i] << endl;


}