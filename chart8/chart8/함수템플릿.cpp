//�Լ� ���ø�
#include <iostream>
using namespace std;

template <typename T>
T Add(T a, T b)
{
	return a + b;
}
template<> //Ư��ȭ(���ڿ��� �Ϲ�ȭ ó�� ����� �ȵȴ�)
char* Add(char* lstr, char* rstr)
{
	int llen = strlen(lstr);
	int rlen = strlen(rstr);
	int len = llen + rlen + 1;//��ü���� -> ������ �� + 1 (null������ ��)
	char* str = new char[len]; //���ڸ� ������ ��ü ����(�����Ҵ�)
	strcpy_s(str, llen + 1, lstr);
	strcpy_s(str, len, rstr);//��ü�� ���̿� �����ʿ� �ִ� ���ڿ��� ���δ� 
	return str;
}
int main()
{
	int res = Add<int>(3, 4);//5������(->�Լ��� ���: Ÿ���� �����ص� �����Ϸ��� �˾Ƽ� ���� ����)
	cout << res << endl;
	const char* sres = Add<const char*>("Hello", "Iot");//10������
	cout << sres << endl;
	return 0;

}