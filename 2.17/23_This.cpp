#include<stdio.h>

class Today
{
private:
	int time; //�������
public:
	Today(int time) //�Ű�����
	{
		this->time = time;
		//time : �Ű�����
		//this-<time : �������
	}
	void Print(int time)
	{
		printf("�Ű����� : %d\n", time);
		printf("������� : %d\n", this->time);
	}

};


int main23()
{
	/*
	this ������
	��� ����Լ��� �߰��Ǵ� ������ ����
	�Լ� ȣ��� ȣ���� ��ü(Ŭ����)�� �ּҸ� ����Ű�� ������
	��� ������ �ڷ����̹Ƿ� �ٸ����� ����ų �� ����.
	�� �ڽ�(Ŭ����)��� ��
	*/

	Today* today = new Today(10);
	today->Print(20);

	return 0;
}