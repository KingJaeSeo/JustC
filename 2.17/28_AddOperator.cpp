#include<stdio.h>

class Vector
{
private:
	float x, y, z;
public:
	Vector(float _x, float _y, float _z)
	{
		x = _x;
		y = _y; 
		z = _z;
	}
	//연산자 오버로딩
	Vector operator +(Vector& other)
	{
		x = x + other.x;
		y = y + other.y;
		z = z + other.z;
		return Vector(x, y, z);//더한 결과를 반환
	}
	Vector operator *(Vector& other)
	{
		x = x * other.x;
		y = y * other.y;
		z = z * other.z;
		return Vector(x, y, z);
	}
	Vector operator -(Vector& other)
	{
		x = x - other.x;
		y = y - other.y;
		z = z - other.z;
		return Vector(x, y, z);
	}
	void Print()
	{
		printf("x : %f\n y : %f\n z : %f\n", x,y,z);
	}
};


int main28()
{
	/*
	연산자 오버로딩
	클래스간의 사칙연산은 가능을 만들어 주는 것
	논리연산자 기능도 만들 수 있다.
	연산자 오버로딩은 함수로 구현
	*/


	/*
	연산자 오버로딩 규칙
	기존에 없는 새로운 연산자는 정의 불가(^%, $, # 등)
	멤버함수로 오버로드 된 연산자의 첫번째 매개변수는
	항상 연산자가 호출되는 객체 클래스
	*/


	Vector v1(5, 6, 7);
	Vector v2(1, 2, 3);
	Vector result = v1 * v2;
	result.Print();
	
	/*
	실습
	Vector클래스에
	빼기(-) 연산자 오버로딩 만들기
	곱하기(*) 연산자 오버로딩 만들기
	*/

	return 0;
}