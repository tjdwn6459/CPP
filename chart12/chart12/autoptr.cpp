#include <iostream>
#include <memory>
using namespace std;
int main()
{
	auto_ptr<string>pStr(new string("Autoptr test"));
	cout << *pStr << endl;


}