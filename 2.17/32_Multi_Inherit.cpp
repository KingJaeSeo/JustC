#include<stdio.h>

class Printer
{
public:
    void Print() { printf("����Ʈ\n"); }
};

class Scanner
{
public:
    void Scan() { printf("��ĵ\n"); }
};

class MultiMachine : public Printer, public Scanner
{
public:
    void Multi()
    {
        //��ӹ��� ����� ��� ����� �� �ִ�.
        Print();
        Scan();
     }
};

int main32()
{
    /*
    ���߻��
    �ڽ�Ŭ������ �θ�Ŭ������ �������� ����� �� �ִ�.
    */

    MultiMachine* multi = new MultiMachine();

    multi->Multi();//���ձ�� Print�� ��ӹ޾� ��Ƽ ����� ����� �� �ִ�.
    multi->Print();//���ձ�� Print�� ��ӹ޾� ����Ʈ ����� ����� �� �ִ�.
    multi->Scan();//���ձ�� Fax�� ��ӹ޾� �ѽ� ����� ����� �� �ִ�.
    
    
    return 0;
}