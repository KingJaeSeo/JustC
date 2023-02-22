#include<stdio.h>

struct PersonA
{
	char name[12];//이름
	int age;//나이
	float height;//키

	//구조체 안에 있는 멤버 함수
	void Print()
	{
		printf("이름 : %s\n", name); 
		printf("나이 : %d\n", age); 
		printf("키 : %f\n", height);
	}
	//구조체 안에 함수를 정의
};

struct PersonB
{
	char name[12];
	int age;
	float height;

	void Print();//함수의 원형 선언
	
};


void PersonB::Print()
{
	/*
	범위지정연산자(::)
	함수가 어떤 구조체의 멤버인지 알려주는 역할
	*/
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("키 : %f\n", height);
}

struct PersonC
{
	char name[12];
	int age;
	float height;

	/*
	* 멤버함수 2개
	void Print()
	{
		printf("이름 : %s\n", name);
		printf("나이 : %d\n", age);
		printf("키 : %f\n", height);
	}
	*/

	void Print();
};

void PersonC::Print()//구조체 밖에 멤버함수 정의
{
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("키 : %f\n", height);
}


int main13()
{
	
	/*
	%d정수출력타입
	%f실수 출력타입
	
	구조체
	C언어 : 변수의 모음
	C++   : 변수와 함수의 모음
	*/

	PersonA personA = { "홍길동", 10, 123.45f };
	personA.Print();

	PersonB personB = { "이순신", 15, 234.56f };
	personB.Print();

	PersonC personC = { "이세종", 20, 153.26f };
	personC.Print();

	/*
	실습
	구조체를 만들고
	멤버함수 2개를 선언
	구조체 바깥에 멤버함수 정의하기
	*/

	return 0;
}
