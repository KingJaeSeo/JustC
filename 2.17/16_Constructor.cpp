#include<stdio.h>
#include<string.h>

class Druid
{
public:
	char name[12];//�̸�
	int damage;//���ݷ�

	Druid()//������
	{
		strcpy_s(name, sizeof(char) * 9, "����̵�");
		damage = 10;
		printf("����̵� ����\n");
		printf("�̸� : %s\n", name);
		printf("������ : %d\n", damage);
	}
};

class Director
{
public:
	char name[13];
	int age;

	Director()
	{
		strcpy_s(name, sizeof(char) * 7, "������");
		age = 24;
		printf("�̸� : %s\n", name);
		printf("���� : %d\n", age);
	}
	
};

int main16()
{
	/*
	������(constructor)
	Ŭ������ �����Ǿ����� ȣ��Ǵ� �Լ�
	������ �̸��� Ŭ������� ���ƾ� ��
	��ȯ�ڷ����� ����.(void�� �ƴϴ�)
	��������� �ʱ�ȭ �ϴµ� �ַ� ���
	*/

	//Druid druid;//��ü�� �ν��Ͻ�

	//Druid* dru = new Druid();//��ü

	/*
	�ǽ�
	Director��� �̸����� Ŭ������ �����
	Director�� �̸� ���� ���� �����
	�����ڸ� ���ؼ� �⺻���� �־��ְ�
	�����ڿ��� �̸� ���� ���
	��ü �����ϱ�
	*/

	Director director;
	Director* drt = new Director();

	return 0;
}