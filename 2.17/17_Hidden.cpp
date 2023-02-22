#include<stdio.h>
#include<string.h>

class Potato
{
public:
	char name[12];//이름
	int price;//가격

	//Potato() {};//디폴트 생성자
	Potato() {};//디폴트 생성자

	Potato(const char* _name, int _price)
	{
		strcpy_s(name, sizeof(char) * 5, _name);
		price = _price;
	}
};

int main17()
{
	/*
	디폴트 생성자
	컴파일러는 생성자가 없으면 디폴트생성자를 만든다.
	매개변수가 있는 생성자가 있다면 디폴트 생성자를 만들지 않는다.
	
	*/

	Potato* potatoA = new Potato();
	Potato* potatoB = new Potato("감자", 10);
	printf("이름 : %s\n", potatoB->name);
	printf("가격 : %d\n", potatoB->price);

	return 0;
	
}