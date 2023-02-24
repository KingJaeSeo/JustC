#include<stdio.h>
#include<stdlib.h>
#include<time.h>

class Newbie //초보자 직업
{
public:
    int currentHp = 100;
    
    void StaticHit(int damage)
    {
        currentHp -= damage;
        printf("남은체력 : %d\n", currentHp);
    }
    virtual void DynamicHit(int damage)
    {
        currentHp -= damage;
        printf("남은체력 : %d\n", currentHp);
    }
};

class Warrior : public Newbie
{
public:
    void StaticHit(int damage)
    {
        //전사는 패시브로 데미지를 절반만 받는다.
        currentHp == damage / 2;
        printf("남은체력 : %d\n", currentHp);
    }
    virtual void DynamicHit(int damage)
    {
        currentHp -= damage/2;
        printf("남은체력 : %d\n", currentHp);
    }
};
class Thief : public Newbie
{
public:
    void StaticHit(int damage)
    {
        //도적은 50%확률로 공격을 회피한다.
        int rnd = rand() % 2;//0,1난수가 나옴
        if (rnd == 0) { printf("회피\n"); }
        else
        {
            currentHp -= damage;
            printf("회피 실패 : %d\n", currentHp);
        }
        
    }
    virtual void DynamicHit(int damage)
    {
        int rnd = rand() % 2;
        if (rnd == 0) { printf("회피\n"); }
        else
        {
            currentHp -= damage;
            printf("회피 실패 : %d\n", currentHp);
        }
    }
};
class Monster
{
public:
    int power = 10;//몬스터의 공격력
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

    Newbie* newbie = new Newbie();//초보자
    Warrior* warrior = new Warrior();//전사
    Thief* thief = new Thief();//도적

    Monster* monster = new Monster();//몬스터

    srand((unsigned)time(NULL));
    monster->AttackA(newbie);
    monster->AttackB(newbie);

    monster->AttackA(warrior);
    /*
    일반함수를 호출해서 정적바인딩현상이 일어난다.
    전사의 패시브효과가 발생하지 않음
    */
    monster->AttackB(warrior);
    /*
    가상함수를 호출해서 동적바인딩이 일어남
    전사의 패시브효과가 정상적으로 발동
    */

    monster->AttackA(thief);
    monster->AttackB(thief);


    return 0;
}