#include<stdio.h>
#include<stdlib.h>
#include<time.h>

inline int GetRandom(int n)
{
	return rand() % n;
	/*
	������� ����
	���α׷� ���� ���� �ٸ� ��ġ�� �ڵ带 ������Ѿ��� ��
	���������� �ð�, �޸�, �ڿ� ���� ���Ǵ� ����
	��, �ٸ����� �Լ��� �����Ҷ� �޸𸮿� �ð��� �� �Ҹ�ȴ�.
	*/
}

inline char GetStar()
{
	return '*';
}

inline int GetFive()
{
	return 5;
}

int main12()
{
	/*
	�ζ��� �Լ�
	�Լ��� ȣ������ �ʰ� �ڵ带 ���ڸ����� �״�� �����ϴ� �Լ�
	�ڵ带 ���� �־��ִ� �Լ�
	�ʹ� �� �ڵ带 ����ϸ� �ڵ尡 �����ǹǷ� ª�� ��ɾ �ַ� ���
	*/
	srand((unsigned)time(NULL));

	int rnd = GetRandom(10);//rand() % 10

	printf("rnd : %d\n", rnd);

	printf("star : %c\n", GetStar());

	/*
	�ǽ�
	5�� ���� ��ȯ�ϴ� �ζ��� �Լ� ����
	�� ���
	*/

	printf("five : %d", GetFive());

	return 0;

}