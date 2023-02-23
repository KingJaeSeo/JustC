#include<stdio.h>

class DIV
{
private:
	int num, div;
public:
	DIV(int n, int d)
	{
		num = n; div = d;
	}
	//형변환 오버로딩
	operator double() const
	{
		return double(num) / double(div);
	}
};
class MUL
{
private:
	float num, mul;
public:
	MUL(int s, int e)
	{
		num = s; mul = e;
	}
	operator double() const
	{
		return double(num) * double(mul);
	}

};

int main29()
{
	DIV d(1, 3);
	double db = d;
	printf("db : %f\n", db);
	/*
	실습
	float형으로 형변환 오버로딩 만들기
	결과는 곱한값을 반환
	*/
	MUL e(2, 7);
	double se = e;
	printf("db : %f\n", se);

	return 0;
}