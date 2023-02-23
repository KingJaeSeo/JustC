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
	//������ �����ε�
	Vector operator +(Vector& other)
	{
		x = x + other.x;
		y = y + other.y;
		z = z + other.z;
		return Vector(x, y, z);//���� ����� ��ȯ
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
	������ �����ε�
	Ŭ�������� ��Ģ������ ������ ����� �ִ� ��
	�������� ��ɵ� ���� �� �ִ�.
	������ �����ε��� �Լ��� ����
	*/


	/*
	������ �����ε� ��Ģ
	������ ���� ���ο� �����ڴ� ���� �Ұ�(^%, $, # ��)
	����Լ��� �����ε� �� �������� ù��° �Ű�������
	�׻� �����ڰ� ȣ��Ǵ� ��ü Ŭ����
	*/


	Vector v1(5, 6, 7);
	Vector v2(1, 2, 3);
	Vector result = v1 * v2;
	result.Print();
	
	/*
	�ǽ�
	VectorŬ������
	����(-) ������ �����ε� �����
	���ϱ�(*) ������ �����ε� �����
	*/

	return 0;
}