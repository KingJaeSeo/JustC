#include<stdio.h>

class Today
{
private:
	int time; //멤버변수
public:
	Today(int time) //매개변수
	{
		this->time = time;
		//time : 매개변수
		//this-<time : 멤버변수
	}
	void Print(int time)
	{
		printf("매개변수 : %d\n", time);
		printf("멤버변수 : %d\n", this->time);
	}

};


int main23()
{
	/*
	this 포인터
	모든 멤버함수에 추가되는 숨겨진 변수
	함수 호출시 호출한 객체(클래스)의 주소를 가리키는 포인터
	상수 포인터 자료형이므로 다른것을 가리킬 수 없다.
	나 자신(클래스)라는 뜻
	*/

	Today* today = new Today(10);
	today->Print(20);

	return 0;
}