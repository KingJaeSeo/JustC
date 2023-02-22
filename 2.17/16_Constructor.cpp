#include<stdio.h>
#include<string.h>

class Druid
{
public:
	char name[12];//이름
	int damage;//공격력

	Druid()//생성자
	{
		strcpy_s(name, sizeof(char) * 9, "드루이드");
		damage = 10;
		printf("드루이드 생성\n");
		printf("이름 : %s\n", name);
		printf("데미지 : %d\n", damage);
	}
};

class Director
{
public:
	char name[13];
	int age;

	Director()
	{
		strcpy_s(name, sizeof(char) * 7, "개발자");
		age = 24;
		printf("이름 : %s\n", name);
		printf("나이 : %d\n", age);
	}
	
};

int main16()
{
	/*
	생성자(constructor)
	클래스가 생성되었을때 호출되는 함수
	생성자 이름은 클래스명과 같아야 함
	반환자료형이 없다.(void도 아니다)
	멤버변수를 초기화 하는데 주로 사용
	*/

	//Druid druid;//객체와 인스턴스

	//Druid* dru = new Druid();//객체

	/*
	실습
	Director라는 이름으로 클래스를 만들고
	Director의 이름 나이 변수 만들기
	생성자를 통해서 기본값을 넣어주고
	생성자에서 이름 나이 출력
	객체 생성하기
	*/

	Director director;
	Director* drt = new Director();

	return 0;
}