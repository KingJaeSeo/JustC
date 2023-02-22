#include<stdio.h>

class Simple
{
private:
	int value=10;
	float speed=10;
public:
	Simple() : value(10)
	{
		printf("value : %d\n", value);
	}
	Simple(int _value) : value(_value)
	{
		printf("value : %d\n",value);
	}
	Simple(int _value, float _speed) : value(_value), speed(_speed)
	{
		printf("value : %d\n", value);
	}

};

int main22()
{

	/*
	생성자 초기화 리스트
	생성자 뒤에 콜론(:)을 표기하고 멤버를 초기화
	*/

	Simple* simpleA = new Simple();
	Simple* simpleB = new Simple(33);

	/*
	실습
	Simple클래스에 float형 변수 만들어서
	매개변수 1개인 생성자로 float형 변수값을 생성자초기화리스트로 초기화
	매개변수 2개인 생성자로 float형 변수와 value변수를 생성자초기화 리스트로 초기화
	*/
	return 0;
}