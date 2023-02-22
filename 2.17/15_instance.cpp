#include<stdio.h>
#include<string.h>

class Product
{
public:
	char name[12];//�̸�
	int price;//����

	void Print();
};

void Product::Print()
{
	printf("��ǰ�� : %s\n", name);
	printf("���� : %d\n", price);
};

int main15()
{
	/*
	Ŭ����/��ü/�ν��Ͻ�

	Ŭ����(Class) 
	������ �Լ��� ����(���)

	��ü(Object) 
	Ŭ������ �̿��Ͽ� ���� �����(����)

	�ν��Ͻ�(Instance)
	�޸𸮿� ������ ��ü, ��ü�� ��밡���� ���� (����)
	��ü�� �������� ������ �ο��Ͽ� ���� ��밡���� ����(��)

	��ü�� �ν��Ͻ�
	�޸𸮿� ������ ��ü�� �ν��Ͻ��� �θ��� ��ü�� �ν��Ͻ��� �����Ѵ�.
	*/

	Product potato; //��ü���� �ν��Ͻ�
	potato = { "����", 1000 };
	potato.Print();

	Product* Apple= new Product;//��ü 
	/*
	Ŭ������ �����ͺ�������� ��ü�� �ȴ�.
	�ν��Ͻ��� �ȳ־��ָ� ����� �� ����.
	*/

	Apple->price = 100;
	strcpy_s(Apple->name, sizeof(char) * 5, "���");
	
	Apple->Print();

	Product* grape = new Product();
	strcpy_s(grape->name, sizeof(char) * 5, "����");
	grape->price = 1200;
	grape->Print();

	/*
	�ǽ�
	ProductŬ������ ����Ͽ� �����ͷ� ��ü�� 3�� �����
	�ν��Ͻ��� ���� �� ���� �ְ� ���
	*/
	
	Product* mango = new Product();
	strcpy_s(mango->name, sizeof(char) * 5, "����");
	mango->price = 3500;
	mango->Print();

	Product* banana = new Product();
	strcpy_s(banana->name, sizeof(char) * 7, "�ٳ���");
	banana->price = 800;
	banana->Print();

	Product* Americano = new Product();
	strcpy_s(Americano->name, sizeof(char) * 11, "�Ƹ޸�ī��");
	Americano->price = 2000;
	Americano->Print();
	//������ API����ؼ� ������� ��Ʃ�� ���ε��ؼ� �÷����� ���� �� ��Ʈ������ Ȱ�� ����
	return 0;
}