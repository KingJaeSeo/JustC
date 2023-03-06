#include<stdio.h>
#include<stdlib.h>
#include<time.h>

inline int GetRandom(int n)
{
	return rand() % n;
	/*
	오버헤드 현상
	프로그램 실행 도중 다른 위치의 코드를 실행시켜야할 때
	간접적으로 시간, 메모리, 자원 등이 사용되는 현상
	즉, 다른곳의 함수를 실행할때 메모리와 시간이 더 소모된다.
	*/
}

inline char GetStar()
{
	return '*';
}

inline int GetFive()
{
	return 5;
}

int main12()
{
	/*
	인라인 함수
	함수를 호출하지 않고 코드를 그자리에서 그대로 실행하는 함수
	코드를 직접 넣어주는 함수
	너무 긴 코드를 사용하면 코드가 복제되므로 짧은 명령어에 주로 사용
	*/
	srand((unsigned)time(NULL));

	int rnd = GetRandom(10);//rand() % 10

	printf("rnd : %d\n", rnd);

	printf("star : %c\n", GetStar());

	/*
	실습
	5의 값을 변환하는 인라인 함수 제작
	값 출력
	*/

	printf("five : %d", GetFive());

	return 0;

}