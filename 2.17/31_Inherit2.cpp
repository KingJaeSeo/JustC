#include<stdio.h>

class Base
{

private:
    int a;
public:
    int b;
protected:
    int c;
};

/*
������������ڸ� protected�� ����
�θ�Ŭ������ ����� �ڽĿ��Ը� ����
*/
class Shape:protected Base
{
public:
    Shape()//������
    {
        //a = 10;//private������ �ܺο��� ��� �Ұ�
        b = 20;
        c = 30;
    }
};

class Sphere :private Shape
{
public:
    Sphere()
    {
        //a = 10;//private������ �ܺο��� ��� �Ұ�
        b = 20;
        c = 30;
    }
};

class Cone :public Sphere
{
    Cone()
    {
        //a = 10;
        //b = 20;
        //c = 30;
    }
};

int main31()
{
    /*
    �������������
    public : �θ�Ŭ������ ����� �ܺο� ����
    protected : �θ�Ŭ������ ����� �ڽĿ��Ը� ����
    private : �θ�Ŭ������ ����� �ڽſ��Ը� ����
    �ƹ��͵� �Ⱦ��� �⺻ private
    */

    Shape shape;
    //shape.b = 10;//�θ�Ŭ������ ������������ڸ� protect�� ���������Ƿ� public�������� ��� �Ұ�

    

    return 0;
}