#include<stdio.h>
#include<string.h>

class Copy
{
public:
	Copy() { printf("생성자!\n"); } //생성자
	
	Copy(Copy& copy)//복사생성자 (참조연산자)
	{
		printf("복사생성자\n");
	}
};

int main20()
{
	/*
	복사생성자
	객체의 복사본을 생성할때 호출되는 생성자
	없다면 컴파일러가 만들어서 사용한다.
	*/

	Copy copyA;
	Copy copyB = copyA;

	return 0;
}