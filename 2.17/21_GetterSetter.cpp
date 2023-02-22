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
			printf("음수가 들어옴\n");
		}
	}
};

int main21()
{
	/*
	캡슐화
	객체의 속성(변수)와 행위(함수)를 하나로 묶고 구현내용 일부를 감추어 은닉화 한다.
	객체의 변수와 함수를 묶어 은닉화.
	데이터의 유효성 검사
	정보 접근 제한
	*/
	GameMode gameMode;
	gameMode.SetMoney(500);

	printf("현재 머니 : %d\n", gameMode.GetMoney());

	return 0;
}