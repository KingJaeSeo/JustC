#include<stdio.h>
//#include <stireg.h> //strcpy_s 함수를 사용하기 위해 사용

/*
클래스(Class)
변수, 함수, 열거형, 구조체의 모음
C++에서는 구조체와 클래스의 차이가 없다(접근 지정자만 차이가 있다)

접근지정자(접근제한자)
멤버를 외부에 접근을 허용하거나 제한하는 역할
public : 멤버를 외부에 접근을 허용
private : 멤버를 내부에서만 접근을 허용(외부에서 접근 불가)
*/

class Human
{
	//클래스는 접근지정자를 안쓰면 기본 private (class)
	//구조체는 접근지정자를 안쓰면 기본 public (struct)
	//pivate일 경우 class 내부에서만 사용 가능해 main 함수 내에서 접근이 불가하다.

public:
	char name[12];
	int age;
	float height;

	void Print();
};

void Human::Print()
{
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("키 : %f\n", height);
}

int main14()
{
	Human human = { "홍길동", 10, 123.45f };;

	human.Print();	

	/*
	클래스의 4대속성
	캡슐화 : 변수와 함수를 묶는다.
	상속성 : 공통된 요소를 자식클래스에게 물려줌
	다형성 : 다른 객체가 동일한 메세지로 다른 기능 수행
	추상성 : 공통적인 부분. 특정 특성을 분리해 재조합
	*/

	return 0;
}