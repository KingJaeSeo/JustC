#include<stdio.h>

class MathTest
{
private:
		const float gravity;
public:
	MathTest(float _gravity) : gravity(_gravity)
	{
		/*
		�ʱ�ȭ ����
		�ʱ�ȭ����Ʈ���� ���� �ʱ�ȭ�� �����Ѵ�.
		�״��� ������ ����
		*/
		//gravity _gravity;
		printf("�߷� : %f\n ", gravity);
	}
};

int main()
{

	/*
	const
	const Ű���带 ������ ���� ����� �ȴ�
	������ ���� ������ �� ���� ��.
	*/

	const float PI = 3.14f;
	//PI = 12.34f;


	return 0;
}