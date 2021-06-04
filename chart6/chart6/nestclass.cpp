#include <stdio.h>
#include <string.h>

class Product
{
private:
	char name[40];
	char company[32];
	int price;

	class Date
	{
	protected:
		int year, month, day;
	public:
		Date(int y, int m, int d) { year = y; month = m; day = d; }
		void OutDate()
		{
			printf("%d%d%d", year, month, day);
		}
	};
	Date validto;//내부에 있는 객체를 생성
public:
	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) :
		validto(y, m, d) {
		strcpy(name, aname);
		strcpy(company, acompany);
		price = aprice;
	}
	void OutProduct()
	{
		printf("이름 = %s\n", name);
		printf("제조시 = %s\n", company);
		printf("유효기간");
		validto.OutDate();
		puts("");
		printf("가격  = %d\n", price);
	}

};
int main()
{

	Product shrimp("새우깡", "농심", 1212, 5, 25, 600);
	shrimp.OutProduct();
}