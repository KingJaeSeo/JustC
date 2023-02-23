#include<stdio.h>

class Something
{
public:
	int value=10;
	int GetValue() { return value; } //getter
	void SetValue(int _value) { value = _value; } //setter
	int GetConstValue() const //상수 멤버 함수
	{
		return value;
	}
};


int main27()
{
	/*
	상수 객체
	const 키워드를 사용하여 상수 객체를 만들 수 있다.
	객체의 멤버변수 값 변경이 불가능하다.
	객체의 멤버변수를 읽을수만 있다.
	Getter와 Setter 모두 사용할 수 없다.
	*/

	/*
	상수 멤버함수
	상수 객체는 상수 멤버함수만 호출 가능
	상수멤버함수는 멤버변수 값 변경 불가
	상수멤버함수 안에서 일반함수 호출 불가
	*/
	const Something some;//상수 객체
	printf("value = %d\n", some.value);

	//some.value = 20; 
	//상수객체 멤버값 변경 불가

	//printf("GetValue = %d\n", some.GetValue());
	//상수객체 Getter사용 불가

	printf("value = %d\n", some.GetConstValue());
	//상수객체는 상수멤버함수만 사용가능

	//some.SetValue(50);
	//setter사용 불가

	return 0;
}