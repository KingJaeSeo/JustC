#include<stdio.h>

class CCC
{
public:
    void Pirnt() { printf("부모클래스\n"); }
    virtual void VirtualPrint() { printf("부모가상함수\n"); }
    //가상함수
};

class DDD : public CCC
{
public:
    void Pirnt() { printf("자식클래스\n"); }
    virtual void VirtualPrint() { printf("자식가상함수\n"); }
};

int main35()
{
    /*
    가상함수
    부모클래스에게서 자식클래스에게 재정의할 것을 기대하고 정의한 함수
    가상함수는 자식클래스에서 재정의 한 내용으로 교체됨
    가상함수를 사용하면 동적바인딩이 된다.
    */

    //정적바인딩
    //컴파일시 객체와 함수가 연결됨
    CCC* ccc = new DDD();//부모객체에 자식을 넣으면
    ccc->Pirnt(); //부모의 함수가 호출

    //동적바인딩
    //런타임시 객체와 함수가 연결됨
    CCC* cc = new DDD();
    cc->VirtualPrint();//자식의 함수가 호출


    return 0;
}