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
	//����ȯ �����ε�
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
	�ǽ�
	float������ ����ȯ �����ε� �����
	����� ���Ѱ��� ��ȯ
	*/
	MUL e(2, 7);
	double se = e;
	printf("db : %f\n", se);

	return 0;
}