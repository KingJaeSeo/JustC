#include<stdio.h>

class Something
{
public:
	int value=10;
	int GetValue() { return value; } //getter
	void SetValue(int _value) { value = _value; } //setter
	int GetConstValue() const //��� ��� �Լ�
	{
		return value;
	}
};


int main27()
{
	/*
	��� ��ü
	const Ű���带 ����Ͽ� ��� ��ü�� ���� �� �ִ�.
	��ü�� ������� �� ������ �Ұ����ϴ�.
	��ü�� ��������� �������� �ִ�.
	Getter�� Setter ��� ����� �� ����.
	*/

	/*
	��� ����Լ�
	��� ��ü�� ��� ����Լ��� ȣ�� ����
	�������Լ��� ������� �� ���� �Ұ�
	�������Լ� �ȿ��� �Ϲ��Լ� ȣ�� �Ұ�
	*/
	const Something some;//��� ��ü
	printf("value = %d\n", some.value);

	//some.value = 20; 
	//�����ü ����� ���� �Ұ�

	//printf("GetValue = %d\n", some.GetValue());
	//�����ü Getter��� �Ұ�

	printf("value = %d\n", some.GetConstValue());
	//�����ü�� �������Լ��� ��밡��

	//some.SetValue(50);
	//setter��� �Ұ�

	return 0;
}