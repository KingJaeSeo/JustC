#include<stdio.h>
#include<string.h>

class Tiger
{
public:
	Tiger()
	{
		/*
		������
		��ü ������ ȣ��
		*/
		printf("ȣ���� ����\n");
	}
	~Tiger()
	{
		printf("ȣ���� �Ҹ�\n");
	}
};

int main18()
{
/*
�Ҹ���
Ŭ���� �̸� �տ� "~"�� �ٴ� �Լ�
��ü�� ���ŵɶ� ȣ��
��ȯ�ڷ����� ����.(coid�� �ƴϴ�)
�ۼ����� ������ �����Ϸ��� �ڵ����� ���� ���
*/

	Tiger* tiger = new Tiger();//�ν��Ͻ� ����

	delete tiger; //�޸�����(�ν��Ͻ� �Ҹ�)

	return 0;
}