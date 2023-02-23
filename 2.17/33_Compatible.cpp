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
    상속클래스의 호환
    부모객체에 자식인스턴스 할당은 허용
    자식객체에 부모인스턴스 할당은 비허용
    */

    Actor actor("액터", 10);
    Actor* pActor;

    Pawn pawn("폰", 21, 32);
    Pawn* pPawn;

    pActor = &actor;//타입이 같으므로 할당 가능
    pPawn = &pawn;//타입이 같으므로 할당 가능

    pActor = &pawn;//부모객체에 자식인스턴스는 할당 가능
    //pPawn = &actor;//자식객체에 부모인스턴스는 할당 불가능

    return 0;
}