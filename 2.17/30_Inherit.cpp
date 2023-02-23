#include<stdio.h>

class Parent
{
private:
    int damage;
    void PrivatePrint() { printf("Private\n"); }
public:
    int defence;
    void PublicPrint() { printf("Public\n"); }
protected:
    int attackSpeed;
    void ProtectedPrint() { printf("Protected\n"); }

};


/*
Child클래스의 부모를 Parent로 지정
Child클래스는 Parent클래스의 public변수와 함수를 사용할 수 있다.
*/

class Child : public Parent
{
public:
    void PrintChild()
    {
        attackSpeed = 10;
        ProtectedPrint();
    }
};

class Son : public Parent
{
public:
    int age;
    float speed;

};

class Animals
{
public:
    int Wolf;
    int Dog;
    int Cat;

};

class Wolf : public Animals
{

};
class Cat : public Animals
{

};
class Dog : public Animals
{

};

int main30()
{
    /*
    클래스의 상속
    기존 클래스를 재활용하는 방법
    클래스의 부모와 자식관계를 정의하고
    부모의 변수와 함수를 자식이 물려받는다.
    */

    /*
    접근지정자
    protected : 멤버를 자식과 자신에게만 접근 허용
    */

    Child* child = new Child();
    //부모의 public 변수와 함수를 사용할 수 있다.
    child->defence = 10;
    child->PublicPrint();
    //child->attackSpeed =58000; // protected는 외부에서 사용 불가

    Son son;
    son.age = 13;
    son.defence = 150;
    son.PublicPrint();
    
    /*
    실습
    Animals 라는 클래스를 만들고 그에 대한 자식클래스 만들기
    자식에는 Wolf, Dog, Cat 클래스가 있다.
    */

    Animals* animals = new Animals();
    animals->Cat = 1;
    animals->Dog = 2;
    animals->Wolf = 5;

    return 0;
}