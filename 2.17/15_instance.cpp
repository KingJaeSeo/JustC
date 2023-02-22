#include<stdio.h>
#include<string.h>

class Product
{
public:
	char name[12];//이름
	int price;//가격

	void Print();
};

void Product::Print()
{
	printf("제품명 : %s\n", name);
	printf("가격 : %d\n", price);
};

int main15()
{
	/*
	클래스/객체/인스턴스

	클래스(Class) 
	변수와 함수의 모음(기능)

	객체(Object) 
	클래스를 이용하여 만든 결과물(변수)

	인스턴스(Instance)
	메모리에 구현된 객체, 객체를 사용가능한 상태 (정보)
	객체에 개별적인 정보를 부여하여 만든 사용가능한 정보(값)

	객체와 인스턴스
	메모리에 구현된 객체를 인스턴스라 부르며 객체가 인스턴스를 포함한다.
	*/

	Product potato; //객체이자 인스턴스
	potato = { "감자", 1000 };
	potato.Print();

	Product* Apple= new Product;//객체 
	/*
	클래스를 포인터변수만들면 객체가 된다.
	인스턴스를 안넣어주면 사용할 수 없다.
	*/

	Apple->price = 100;
	strcpy_s(Apple->name, sizeof(char) * 5, "사과");
	
	Apple->Print();

	Product* grape = new Product();
	strcpy_s(grape->name, sizeof(char) * 5, "포도");
	grape->price = 1200;
	grape->Print();

	/*
	실습
	Product클래스를 사용하여 포인터로 객체를 3개 만들고
	인스턴스를 넣은 후 값을 넣고 출력
	*/
	
	Product* mango = new Product();
	strcpy_s(mango->name, sizeof(char) * 5, "망고");
	mango->price = 3500;
	mango->Print();

	Product* banana = new Product();
	strcpy_s(banana->name, sizeof(char) * 7, "바나나");
	banana->price = 800;
	banana->Print();

	Product* Americano = new Product();
	strcpy_s(Americano->name, sizeof(char) * 11, "아메리카노");
	Americano->price = 2000;
	Americano->Print();
	//집가서 API사용해서 만든게임 유튜브 업로드해서 올려놓기 모든게 다 포트폴리오 활용 가능
	return 0;
}