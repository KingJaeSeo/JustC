#include<stdio.h>
#include<string.h>

class Copy
{
public:
	Copy() { printf("������!\n"); } //������
	
	Copy(Copy& copy)//��������� (����������)
	{
		printf("���������\n");
	}
};

int main20()
{
	/*
	���������
	��ü�� ���纻�� �����Ҷ� ȣ��Ǵ� ������
	���ٸ� �����Ϸ��� ���� ����Ѵ�.
	*/

	Copy copyA;
	Copy copyB = copyA;

	return 0;
}