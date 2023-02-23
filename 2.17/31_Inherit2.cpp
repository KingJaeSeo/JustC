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
상속접근지정자를 protected로 쓰면
부모클래스의 멤버를 자식에게만 공개
*/
class Shape:protected Base
{
public:
    Shape()//생성자
    {
        //a = 10;//private변수는 외부에서 사용 불가
        b = 20;
        c = 30;
    }
};

class Sphere :private Shape
{
public:
    Sphere()
    {
        //a = 10;//private변수는 외부에서 사용 불가
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
    상속접근지정자
    public : 부모클래스의 멤버를 외부에 공개
    protected : 부모클래스의 멤버를 자식에게만 공개
    private : 부모클래스의 멤버를 자신에게만 공개
    아무것도 안쓰면 기본 private
    */

    Shape shape;
    //shape.b = 10;//부모클래스의 상속접근지정자를 protect로 설정했으므로 public변수여도 사용 불가

    

    return 0;
}