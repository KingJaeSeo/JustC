#include<stdio.h>
#include<string.h>


class Engine
{
private:
	char* name;
	int count; //����

public:
	Engine()
	{
		printf("���� ����\n");
		
	}
	Engine(const char* _name, int _count)
	{
		name = new char[strlen(_name) + 1];
		//strlen : ���ڿ��� ���̸� ��ȯ
		strcpy_s(name, strlen(_name) + 1, _name);
		count = _count;
		printf("���� �̸� : %s\n", name);
		printf("���� ���� : %d\n", count);
	}

	~Engine()
	{
		printf("%s ���� �Ҹ�\n", name);
		delete name;
	}
};



int main19()
{
	Engine unity("����Ƽ", 10); //�����Ҵ�
	
	/*
	�����Ҵ�
	�������ε� �ν��Ͻ��� �����Ǹ� �޸��� ���ÿ����� �Ҵ�ȴ�.
	���ÿ��� �����ʹ� �Լ��� ����Ǹ� �ڵ����� �Ҹ�
	�����Ҵ��� �޸������� �� �ʿ䰡 ����.
	�����Ͻ� �Ҵ��
	*/

	Engine* unreal = new Engine("�𸮾�", 5); //�����Ҵ�

	/*
	�����Ҵ�
	��Ÿ���߿� �ν��Ͻ��� �����Ǹ� �޸� �������� �Ҵ�ȴ�.
	������ �����ʹ� �Լ��� ����ǵ� �Ҹ���� �ʴ´�.
	�����Ҵ��� �޸������� ���־�� �Ѵ�.
	��Ÿ�ӽ� �Ҵ��
	��� �����Ҵ��� �𸮾��� ��� �����Ͻ� �����Ҹ��� ������ �ʴ� �ݸ� �����Ҵ��� ����Ƽ�� �����Ͻ� �����Ҹ��� ��µȴ�.
	*/

	delete unreal;

	return 0;
}