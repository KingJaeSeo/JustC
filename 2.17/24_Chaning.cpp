#include<stdio.h>

class Calculator
{
private:
	int value;
public:
	Calculator(int _value) { value = _value; }

	Calculator& Add(int _value) //함수
	{
		//클래스를 반환자료형으로 Add함수 정의
		value += _value;
		return *this; //자신을 반환
	}
	Calculator& Sub(int _value)
	{
		value -= _value;
		return *this; //객체 자신을 반환
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
		printf(" 시작\n");
		return *this;
	}
	GameState& Ready()
	{
		printf(" 준비\n");
		return *this;
	}
	GameState& Progress()
	{
		printf(" 진행\n");
		return *this;
	}
	GameState& End()
	{
		printf(" 종료\n");
		return *this;
	}
};

int main24()
{

	/*
	멤버함수 체이닝 패턴
	작업중이던 객체를 변환하여 멤버함수를 연속적으로 호출하는 방법.
	장점
	코드 줄 수를 단축시킬 수 있다.

	단점
	오류 발생지점을 파악하기 어렵다	
	*/

	//정적할당
	
	Calculator calA(20);
	calA.Add(10).Sub(5).Mul(3).Add(22).Sub(44).Div(2);

	printf("value : %d\n", calA.GetValue());

	//동적할당
	Calculator* calB = new Calculator(20);
	calB->Add(30).Mul(30).Sub(10).Add(50).Div(50);
	printf("value : %d\n", calB->GetValue());


	/*
	실습
	GameState라는 클래스를 만든다.
	"시작"출력 함수
	"준비"출력 함수
	"진행"출력 함수
	"종료"출력 함수
	각각 함수를 만들고 멤버함수 체이닝패턴으로 함수를 순서대로 호출
	*/

	GameState gameState;
	gameState.Start().Ready().Progress().End();
	
	return 0;
}
