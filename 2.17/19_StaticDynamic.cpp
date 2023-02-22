#include<stdio.h>
#include<string.h>


class Engine
{
private:
	char* name;
	int count; //갯수

public:
	Engine()
	{
		printf("엔진 생성\n");
		
	}
	Engine(const char* _name, int _count)
	{
		name = new char[strlen(_name) + 1];
		//strlen : 문자열의 길이를 반환
		strcpy_s(name, strlen(_name) + 1, _name);
		count = _count;
		printf("엔진 이름 : %s\n", name);
		printf("엔진 갯수 : %d\n", count);
	}

	~Engine()
	{
		printf("%s 엔진 소멸\n", name);
		delete name;
	}
};



int main19()
{
	Engine unity("유니티", 10); //정적할당
	
	/*
	정적할당
	선언만으로도 인스턴스가 생성되며 메모리의 스택영역에 할당된다.
	스택영역 데이터는 함수가 종료되면 자동으로 소멸
	정적할당은 메모리해제를 할 필요가 없다.
	컴파일시 할당됨
	*/

	Engine* unreal = new Engine("언리얼", 5); //동적할당

	/*
	동적할당
	런타임중에 인스턴스가 생성되며 메모리 힙영역에 할당된다.
	힙영역 데이터는 함수가 종료되도 소멸되지 않는다.
	동적할당은 메모리해제를 해주어야 한다.
	런타임시 할당됨
	고로 동적할당인 언리얼의 경우 컴파일시 엔진소멸이 나오지 않는 반면 정적할당인 유니티는 컴파일시 엔진소멸이 출력된다.
	*/

	delete unreal;

	return 0;
}