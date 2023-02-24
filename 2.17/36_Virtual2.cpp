#include<stdio.h>
#include<stdlib.h>
#include<time.h>

class Newbie //�ʺ��� ����
{
public:
    int currentHp = 100;
    
    void StaticHit(int damage)
    {
        currentHp -= damage;
        printf("����ü�� : %d\n", currentHp);
    }
    virtual void DynamicHit(int damage)
    {
        currentHp -= damage;
        printf("����ü�� : %d\n", currentHp);
    }
};

class Warrior : public Newbie
{
public:
    void StaticHit(int damage)
    {
        //����� �нú�� �������� ���ݸ� �޴´�.
        currentHp == damage / 2;
        printf("����ü�� : %d\n", currentHp);
    }
    virtual void DynamicHit(int damage)
    {
        currentHp -= damage/2;
        printf("����ü�� : %d\n", currentHp);
    }
};
class Thief : public Newbie
{
public:
    void StaticHit(int damage)
    {
        //������ 50%Ȯ���� ������ ȸ���Ѵ�.
        int rnd = rand() % 2;//0,1������ ����
        if (rnd == 0) { printf("ȸ��\n"); }
        else
        {
            currentHp -= damage;
            printf("ȸ�� ���� : %d\n", currentHp);
        }
        
    }
    virtual void DynamicHit(int damage)
    {
        int rnd = rand() % 2;
        if (rnd == 0) { printf("ȸ��\n"); }
        else
        {
            currentHp -= damage;
            printf("ȸ�� ���� : %d\n", currentHp);
        }
    }
};
class Monster
{
public:
    int power = 10;//������ ���ݷ�
    void AttackA(Newbie* hitter)
    {
        hitter->StaticHit(power);
    }
    void AttackB(Newbie* hitter)
    {
        hitter->DynamicHit(power);
    }
};


int main36()
{

    Newbie* newbie = new Newbie();//�ʺ���
    Warrior* warrior = new Warrior();//����
    Thief* thief = new Thief();//����

    Monster* monster = new Monster();//����

    srand((unsigned)time(NULL));
    monster->AttackA(newbie);
    monster->AttackB(newbie);

    monster->AttackA(warrior);
    /*
    �Ϲ��Լ��� ȣ���ؼ� �������ε������� �Ͼ��.
    ������ �нú�ȿ���� �߻����� ����
    */
    monster->AttackB(warrior);
    /*
    �����Լ��� ȣ���ؼ� �������ε��� �Ͼ
    ������ �нú�ȿ���� ���������� �ߵ�
    */

    monster->AttackA(thief);
    monster->AttackB(thief);


    return 0;
}