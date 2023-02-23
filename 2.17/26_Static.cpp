#include<stdio.h>

class StaticClass
{
public:
	//��������
	//��ü(Ŭ���� ����)�� ������ �־ �� 1���� ����
	static int count;
		
	int value;
	StaticClass()
	{
		count = 0;
		value = 0;
	}

	//�����Լ�
	//��ü�� ������ �־ 1���� ����
	static void Print()
	{
		printf("�����Լ�");
	}
};

int StaticClass::count = 0;

int main26()
{
	/*
	static
	�ѹ��� �ʱ�ȭ �Ǹ� ���α׷� ����� �Ҹ�
	������ ����� �Ҹ����� �ʴ´�.
	��� ��ü�� �����ϴ� ����� �ȴ�.
	��ü�ʹ� ���������� �����Ѵ�.
	��ü�� �������̹Ƿ� Ŭ���������� ����Ѵ�.
	��ü�� ���ؼ� ����� �Ұ����ϴ�.
	�Ϲ� ������ ��ü���� ���������� �����ϰ�
	���� ��� ������ ��簴ü�� �����ϴ� ������ �ȴ�.
	*/

	//��ü�κ��� ���
	StaticClass* myClass = new StaticClass();
	myClass->count = 10;
	printf("count : %d\n", myClass->count);

	//Ŭ���������� ���
	StaticClass::count = 20;
	printf("count : %d\n", StaticClass::count);

	//��ü2
	StaticClass* myClass2 = new StaticClass;
	myClass2->count = 30;
	printf("count : %d\n", myClass->count);

	//��ü3
	StaticClass* myClass3 = new StaticClass;
	myClass3->count = 40;
	printf("count : %d\n", myClass->count);

	//��ü4
	StaticClass::count = 50;
	printf("count : %d\n", myClass->count);

	myClass->Print();
	myClass2->Print();
	//���� �Լ��� Ŭ���� ������ ȣ���� ����������
	StaticClass::Print();
	

	//���������� ��ü�� ���ؼ� ����� �Ұ�
	//myClass->count = 10;
	//printf("count : %d\n", myClass->count);
	//StaticClass::count = 20;
	//printf("count : %d\n", StaticClass::count);


	return 0;
}