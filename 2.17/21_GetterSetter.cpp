#include<stdio.h>
#include<string.h>

class GameMode
{
private:
	int money= 100;
public:
	int GetMoney() {return money;} //getter
	void SetMoney(int value)// { money = value; } //setter
	{
		if (value >= 0)
		{
			money = value;
		}
		else 
		{
			printf("������ ����\n");
		}
	}
};

int main21()
{
	/*
	ĸ��ȭ
	��ü�� �Ӽ�(����)�� ����(�Լ�)�� �ϳ��� ���� �������� �Ϻθ� ���߾� ����ȭ �Ѵ�.
	��ü�� ������ �Լ��� ���� ����ȭ.
	�������� ��ȿ�� �˻�
	���� ���� ����
	*/
	GameMode gameMode;
	gameMode.SetMoney(500);

	printf("���� �Ӵ� : %d\n", gameMode.GetMoney());

	return 0;
}