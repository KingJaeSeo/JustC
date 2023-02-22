#include<stdio.h>

class MathTest
{
private:
		const float gravity;
public:
	MathTest(float _gravity) : gravity(_gravity)
	{
		/*
		초기화 순서
		초기화리스트에서 먼저 초기화를 진행한다.
		그다음 생성자 순서
		*/
		//gravity _gravity;
		printf("중력 : %f\n ", gravity);
	}
};

int main()
{

	/*
	const
	const 키워드를 변수에 쓰면 상수가 된다
	변수의 값을 변경할 수 없게 됨.
	*/

	const float PI = 3.14f;
	//PI = 12.34f;


	return 0;
}