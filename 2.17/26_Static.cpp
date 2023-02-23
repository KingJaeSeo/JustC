#include<stdio.h>

class StaticClass
{
public:
	//정적변수
	//객체(클랫의 변수)가 여러개 있어도 단 1개만 존재
	static int count;
		
	int value;
	StaticClass()
	{
		count = 0;
		value = 0;
	}

	//정적함수
	//객체가 여러개 있어도 1개만 존재
	static void Print()
	{
		printf("정적함수");
	}
};

int StaticClass::count = 0;

int main26()
{
	/*
	static
	한번만 초기화 되며 프로그램 종료시 소멸
	범위를 벗어나도 소멸하지 않는다.
	모든 객체가 공유하는 멤버가 된다.
	객체와는 독립적으로 존재한다.
	객체의 독립적이므로 클래스명으로 사용한다.
	객체를 통해서 사용이 불가능하다.
	일반 변수는 객체마다 독립적으로 존재하고
	정적 멤버 변수는 모든객체가 공유하는 변수가 된다.
	*/

	//객체로부터 사용
	StaticClass* myClass = new StaticClass();
	myClass->count = 10;
	printf("count : %d\n", myClass->count);

	//클래스명으로 사용
	StaticClass::count = 20;
	printf("count : %d\n", StaticClass::count);

	//객체2
	StaticClass* myClass2 = new StaticClass;
	myClass2->count = 30;
	printf("count : %d\n", myClass->count);

	//객체3
	StaticClass* myClass3 = new StaticClass;
	myClass3->count = 40;
	printf("count : %d\n", myClass->count);

	//객체4
	StaticClass::count = 50;
	printf("count : %d\n", myClass->count);

	myClass->Print();
	myClass2->Print();
	//정적 함수는 클래스 명으로 호출이 가능해진다
	StaticClass::Print();
	

	//정적변수는 객체를 통해서 사용이 불가
	//myClass->count = 10;
	//printf("count : %d\n", myClass->count);
	//StaticClass::count = 20;
	//printf("count : %d\n", StaticClass::count);


	return 0;
}