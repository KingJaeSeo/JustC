#include<stdio.h>

class Printer
{
public:
    void Print() { printf("프린트\n"); }
};

class Scanner
{
public:
    void Scan() { printf("스캔\n"); }
};

class MultiMachine : public Printer, public Scanner
{
public:
    void Multi()
    {
        //상속받은 멤버를 모두 사용할 수 있다.
        Print();
        Scan();
     }
};

int main32()
{
    /*
    다중상속
    자식클래스는 부모클래스를 여러개를 상속할 수 있다.
    */

    MultiMachine* multi = new MultiMachine();

    multi->Multi();//복합기는 Print를 상속받아 멀티 기능을 사용할 수 있다.
    multi->Print();//복합기는 Print를 상속받아 프린트 기능을 사용할 수 있다.
    multi->Scan();//복합기는 Fax를 상속받아 팩스 기능을 사용할 수 있다.
    
    
    return 0;
}