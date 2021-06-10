#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v;
	vector<int> v1 = { 1, 2, 3, 4, 5 };//1, 2, 3, 4, 5,를 가진 벡터가 생성
	vector<int>v2[5];//5개의 방을 가진 v2가 생성 

	v.push_back(10); //맨마지막에 10이라는 값이 추가 댄다 
	vector<int> ::iterator iter = v.begin();//template에 있는 라이브러리 배열을 사용 가능
	iter = v.insert(iter, 2);

	//삭제(맨마지막 원소 자동 삭제)
	v.pop_back();
	v.erase(v.begin() + 10);
	v.clear();//벡터에 있는 모든원소 제거 

	return 0;
}
