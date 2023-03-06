#include<stdio.h>
#include<stdlib.h>
#include<time.h>

class Game
{
public:
    virtual void FuncA()
    {
        printf("부모클래스\n");
    }
    virtual void FuncB(int num) {}
    virtual void FuncC()const {}
    virtual void FuncD() {}
};

class GameMode :public Game
{
public:
    virtual void FuncA()
    {
        Game::FuncA(); //부모클래스의 FuncA함수 호출
        printf("자식클래스\n");
    }
    virtual void FuncB(int num) override
    {    }
    virtual void FuncC()const override
    {}
    virtual void FuncD() final//final : 함수의 재정의를 자식에서 못하게 함 
    {}
};

class GameState :public GameMode
{

public:
    virtual void FuncC() const override {}
    //virtual void FuncD() override {}//final 이므로 재정의 불가


};

class Adventure
{
        public:
        int currentHp = 100;

        void StaticHit(int damage)
        {
            currentHp -= damage;
            printf("모험가\n남은체력 : %d\n", currentHp);
        }
        virtual void DynamicHit(int damage)
        {
            currentHp -= damage;
            printf("모험가\n남은체력 : %d\n", currentHp);
        }
};
class Knight : public Adventure
{
public:
    void StaticHit(int damage)
    {
        currentHp == damage / 3;
        printf("기사\n남은체력 : %d\n", currentHp);
    }
    virtual void DynamicHit(int damage)
    {
        currentHp -= damage / 3;
        printf("기사\n남은체력 : %d\n", currentHp);
    }

};

class Archer : public Adventure
{
public:
    void StaticHit(int damage)
    {
        int rnd = rand() % 2*2;//25프로 확률로 회피
        if (rnd == 0) { printf("궁수\n회피\n"); }
        else
        {
            currentHp -= damage;
            printf("궁수\n회피 실패 : %d\n", currentHp);
        }
    }
    virtual void DynamicHit(int damage)
    {
        int rnd = rand() % 2;
        if (rnd == 0) { printf("궁수\n회피\n"); }
        else
        {
            currentHp -= damage;
            printf("궁수\n회피 실패 : %d\n", currentHp);
        }
    }
};

class Monster 
{
public:
    int Attack = 10;
    void AttackA(Adventure* hitter)
    {
        hitter->StaticHit(Attack);
    }
    void AttackB(Adventure* hitter)
    {
        hitter->DynamicHit(Attack);
    }

};
int main37()
{
    /*
    override
    안써도 결과는 똑같다. (차이없다)
    가상함수를 쓴다면 (재정의 한다면) 적어주어야 함
    자식에서 써주어야 한다.
    */

    /*
    override를 써야 하는 이유

    1. 가독성
    함수가 재정의 되었음을 쉽게 파악할 수 있다.
    2. 안전핀
    부모함수와 다르면 오류를 발생시킨다.
    오류로 달라진것을 알고 수정할 수 있다.
    */

    /*
    실습
    Adventure(모험가) 클래스 만들기
    모험가를 상속받는 Knight(기사)클래스 만들기
    모험가에 데미지를 받는 함수 만들기
    기사는 데미지를 1/3만 받는다.

    모험가를 상속받는 Archer(궁수)클래스 만들기
    아처는 데미지를 25% 확률로 회피한다.

    몬스터 클래스 만들기
    공격함수 만들기

    가상함수와 상속을 이용하여 구현
    */
    Adventure* adventure = new Adventure;
    Archer* archer = new Archer;
    Knight* knight = new Knight;
    Monster* monster = new Monster;

    monster->AttackA(adventure);
    monster->AttackB(adventure);

    monster->AttackA(archer);
    monster->AttackB(archer);

    monster->AttackA(knight);
    monster->AttackB(knight);

    return 0;
}