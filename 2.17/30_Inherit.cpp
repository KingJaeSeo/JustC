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
ChildŬ������ �θ� Parent�� ����
ChildŬ������ ParentŬ������ public������ �Լ��� ����� �� �ִ�.
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
    Ŭ������ ���
    ���� Ŭ������ ��Ȱ���ϴ� ���
    Ŭ������ �θ�� �ڽİ��踦 �����ϰ�
    �θ��� ������ �Լ��� �ڽ��� �����޴´�.
    */

    /*
    ����������
    protected : ����� �ڽİ� �ڽſ��Ը� ���� ���
    */

    Child* child = new Child();
    //�θ��� public ������ �Լ��� ����� �� �ִ�.
    child->defence = 10;
    child->PublicPrint();
    //child->attackSpeed =58000; // protected�� �ܺο��� ��� �Ұ�

    Son son;
    son.age = 13;
    son.defence = 150;
    son.PublicPrint();
    
    /*
    �ǽ�
    Animals ��� Ŭ������ ����� �׿� ���� �ڽ�Ŭ���� �����
    �ڽĿ��� Wolf, Dog, Cat Ŭ������ �ִ�.
    */

    Animals* animals = new Animals();
    animals->Cat = 1;
    animals->Dog = 2;
    animals->Wolf = 5;

    return 0;
}