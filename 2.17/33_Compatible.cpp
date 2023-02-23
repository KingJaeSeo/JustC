#include<stdio.h>
#include<string.h>

class Actor
{
protected:
    char name[12];
    int level;
public:
    Actor(const char* _name, int _level)
    {
        strcpy_s(name, strlen(_name), _name);
        level = _level;
    }
};

class Pawn : public Actor
{
protected:
    int dex;
public:
    Pawn(const char* _name, int _level, int _dex) : Actor(_name, _level)
    {
        dex = _dex;
    }
};

int main()
{
    /*
    ���Ŭ������ ȣȯ
    �θ�ü�� �ڽ��ν��Ͻ� �Ҵ��� ���
    �ڽİ�ü�� �θ��ν��Ͻ� �Ҵ��� �����
    */

    Actor actor("����", 10);
    Actor* pActor;

    Pawn pawn("��", 21, 32);
    Pawn* pPawn;

    pActor = &actor;//Ÿ���� �����Ƿ� �Ҵ� ����
    pPawn = &pawn;//Ÿ���� �����Ƿ� �Ҵ� ����

    pActor = &pawn;//�θ�ü�� �ڽ��ν��Ͻ��� �Ҵ� ����
    //pPawn = &actor;//�ڽİ�ü�� �θ��ν��Ͻ��� �Ҵ� �Ұ���

    return 0;
}