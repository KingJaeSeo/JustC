#include<stdio.h>
#include<string.h>

class Potato
{
public:
	char name[12];//�̸�
	int price;//����

	//Potato() {};//����Ʈ ������
	Potato() {};//����Ʈ ������

	Potato(const char* _name, int _price)
	{
		strcpy_s(name, sizeof(char) * 5, _name);
		price = _price;
	}
};

int main17()
{
	/*
	����Ʈ ������
	�����Ϸ��� �����ڰ� ������ ����Ʈ�����ڸ� �����.
	�Ű������� �ִ� �����ڰ� �ִٸ� ����Ʈ �����ڸ� ������ �ʴ´�.
	
	*/

	Potato* potatoA = new Potato();
	Potato* potatoB = new Potato("����", 10);
	printf("�̸� : %s\n", potatoB->name);
	printf("���� : %d\n", potatoB->price);

	return 0;
	
}