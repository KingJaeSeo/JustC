#include<stdio.h>
#include<stdlib.h>
#include<time.h>

class Game
{
public:
    virtual void FuncA()
    {
        printf("�θ�Ŭ����\n");
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
        Game::FuncA(); //�θ�Ŭ������ FuncA�Լ� ȣ��
        printf("�ڽ�Ŭ����\n");
    }
    virtual void FuncB(int num) override
    {    }
    virtual void FuncC()const override
    {}
    virtual void FuncD() final//final : �Լ��� �����Ǹ� �ڽĿ��� ���ϰ� �� 
    {}
};

class GameState :public GameMode
{

public:
    virtual void FuncC() const override {}
    //virtual void FuncD() override {}//final �̹Ƿ� ������ �Ұ�


};

class Adventure
{
        public:
        int currentHp = 100;

        void StaticHit(int damage)
        {
            currentHp -= damage;
            printf("���谡\n����ü�� : %d\n", currentHp);
        }
        virtual void DynamicHit(int damage)
        {
            currentHp -= damage;
            printf("���谡\n����ü�� : %d\n", currentHp);
        }
};
class Knight : public Adventure
{
public:
    void StaticHit(int damage)
    {
        currentHp == damage / 3;
        printf("���\n����ü�� : %d\n", currentHp);
    }
    virtual void DynamicHit(int damage)
    {
        currentHp -= damage / 3;
        printf("���\n����ü�� : %d\n", currentHp);
    }

};

class Archer : public Adventure
{
public:
    void StaticHit(int damage)
    {
        int rnd = rand() % 2*2;//25���� Ȯ���� ȸ��
        if (rnd == 0) { printf("�ü�\nȸ��\n"); }
        else
        {
            currentHp -= damage;
            printf("�ü�\nȸ�� ���� : %d\n", currentHp);
        }
    }
    virtual void DynamicHit(int damage)
    {
        int rnd = rand() % 2;
        if (rnd == 0) { printf("�ü�\nȸ��\n"); }
        else
        {
            currentHp -= damage;
            printf("�ü�\nȸ�� ���� : %d\n", currentHp);
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
    �Ƚᵵ ����� �Ȱ���. (���̾���)
    �����Լ��� ���ٸ� (������ �Ѵٸ�) �����־�� ��
    �ڽĿ��� ���־�� �Ѵ�.
    */

    /*
    override�� ��� �ϴ� ����

    1. ������
    �Լ��� ������ �Ǿ����� ���� �ľ��� �� �ִ�.
    2. ������
    �θ��Լ��� �ٸ��� ������ �߻���Ų��.
    ������ �޶������� �˰� ������ �� �ִ�.
    */

    /*
    �ǽ�
    Adventure(���谡) Ŭ���� �����
    ���谡�� ��ӹ޴� Knight(���)Ŭ���� �����
    ���谡�� �������� �޴� �Լ� �����
    ���� �������� 1/3�� �޴´�.

    ���谡�� ��ӹ޴� Archer(�ü�)Ŭ���� �����
    ��ó�� �������� 25% Ȯ���� ȸ���Ѵ�.

    ���� Ŭ���� �����
    �����Լ� �����

    �����Լ��� ����� �̿��Ͽ� ����
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