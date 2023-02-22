#include<stdio.h>

class Simple
{
private:
	int value=10;
	float speed=10;
public:
	Simple() : value(10)
	{
		printf("value : %d\n", value);
	}
	Simple(int _value) : value(_value)
	{
		printf("value : %d\n",value);
	}
	Simple(int _value, float _speed) : value(_value), speed(_speed)
	{
		printf("value : %d\n", value);
	}

};

int main22()
{

	/*
	������ �ʱ�ȭ ����Ʈ
	������ �ڿ� �ݷ�(:)�� ǥ���ϰ� ����� �ʱ�ȭ
	*/

	Simple* simpleA = new Simple();
	Simple* simpleB = new Simple(33);

	/*
	�ǽ�
	SimpleŬ������ float�� ���� ����
	�Ű����� 1���� �����ڷ� float�� �������� �������ʱ�ȭ����Ʈ�� �ʱ�ȭ
	�Ű����� 2���� �����ڷ� float�� ������ value������ �������ʱ�ȭ ����Ʈ�� �ʱ�ȭ
	*/
	return 0;
}