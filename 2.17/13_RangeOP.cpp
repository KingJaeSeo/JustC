#include<stdio.h>

struct PersonA
{
	char name[12];//�̸�
	int age;//����
	float height;//Ű

	//����ü �ȿ� �ִ� ��� �Լ�
	void Print()
	{
		printf("�̸� : %s\n", name); 
		printf("���� : %d\n", age); 
		printf("Ű : %f\n", height);
	}
	//����ü �ȿ� �Լ��� ����
};

struct PersonB
{
	char name[12];
	int age;
	float height;

	void Print();//�Լ��� ���� ����
	
};


void PersonB::Print()
{
	/*
	��������������(::)
	�Լ��� � ����ü�� ������� �˷��ִ� ����
	*/
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("Ű : %f\n", height);
}

struct PersonC
{
	char name[12];
	int age;
	float height;

	/*
	* ����Լ� 2��
	void Print()
	{
		printf("�̸� : %s\n", name);
		printf("���� : %d\n", age);
		printf("Ű : %f\n", height);
	}
	*/

	void Print();
};

void PersonC::Print()//����ü �ۿ� ����Լ� ����
{
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("Ű : %f\n", height);
}


int main13()
{
	
	/*
	%d�������Ÿ��
	%f�Ǽ� ���Ÿ��
	
	����ü
	C��� : ������ ����
	C++   : ������ �Լ��� ����
	*/

	PersonA personA = { "ȫ�浿", 10, 123.45f };
	personA.Print();

	PersonB personB = { "�̼���", 15, 234.56f };
	personB.Print();

	PersonC personC = { "�̼���", 20, 153.26f };
	personC.Print();

	/*
	�ǽ�
	����ü�� �����
	����Լ� 2���� ����
	����ü �ٱ��� ����Լ� �����ϱ�
	*/

	return 0;
}
