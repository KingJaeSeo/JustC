#include<stdio.h>

class Calculator
{
private:
	int value;
public:
	Calculator(int _value) { value = _value; }

	Calculator& Add(int _value) //�Լ�
	{
		//Ŭ������ ��ȯ�ڷ������� Add�Լ� ����
		value += _value;
		return *this; //�ڽ��� ��ȯ
	}
	Calculator& Sub(int _value)
	{
		value -= _value;
		return *this; //��ü �ڽ��� ��ȯ
	}
	Calculator& Mul(int _value)
	{
		value *= _value;
		return *this;
	}
	Calculator& Div(int _value)
	{
		value /= _value;
		return *this;
	}
	int GetValue()
	{
		return value;
	}
};

class GameState
{
public:
	GameState& Start()
	{
		printf(" ����\n");
		return *this;
	}
	GameState& Ready()
	{
		printf(" �غ�\n");
		return *this;
	}
	GameState& Progress()
	{
		printf(" ����\n");
		return *this;
	}
	GameState& End()
	{
		printf(" ����\n");
		return *this;
	}
};

int main24()
{

	/*
	����Լ� ü�̴� ����
	�۾����̴� ��ü�� ��ȯ�Ͽ� ����Լ��� ���������� ȣ���ϴ� ���.
	����
	�ڵ� �� ���� �����ų �� �ִ�.

	����
	���� �߻������� �ľ��ϱ� ��ƴ�	
	*/

	//�����Ҵ�
	
	Calculator calA(20);
	calA.Add(10).Sub(5).Mul(3).Add(22).Sub(44).Div(2);

	printf("value : %d\n", calA.GetValue());

	//�����Ҵ�
	Calculator* calB = new Calculator(20);
	calB->Add(30).Mul(30).Sub(10).Add(50).Div(50);
	printf("value : %d\n", calB->GetValue());


	/*
	�ǽ�
	GameState��� Ŭ������ �����.
	"����"��� �Լ�
	"�غ�"��� �Լ�
	"����"��� �Լ�
	"����"��� �Լ�
	���� �Լ��� ����� ����Լ� ü�̴��������� �Լ��� ������� ȣ��
	*/

	GameState gameState;
	gameState.Start().Ready().Progress().End();
	
	return 0;
}
