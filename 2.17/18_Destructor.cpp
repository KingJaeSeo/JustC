#include<stdio.h>
#include<string.h>

class Tiger
{
public:
	Tiger()
	{
		/*
		생성자
		객체 생성시 호출
		*/
		printf("호랑이 생성\n");
	}
	~Tiger()
	{
		printf("호랑이 소멸\n");
	}
};

int main18()
{
/*
소멸자
클래스 이름 앞에 "~"가 붙는 함수
객체가 제거될때 호출
반환자료형이 없다.(coid도 아니다)
작성하지 않으면 컴파일러가 자동으로 만들어서 사용
*/

	Tiger* tiger = new Tiger();//인스턴스 생성

	delete tiger; //메모리해제(인스턴스 소멸)

	return 0;
}