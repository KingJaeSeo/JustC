#include<stdio.h>

class AAA
{

public:
    void Print() { printf("�θ�Ŭ����\n"); }
};

class BBB : public AAA
{
public:
    void Print() { printf("�ڽ�Ŭ����\n"); }
};
int main34()
{
    /*
    �Լ� ������
    �θ�Ŭ������ �ڽ�Ŭ������ ���� �̸����� �Լ��� �����ϴ� ��
    �θ�� �ڽĿ��� �Լ��̸��� ���ٸ� �ڽ�Ķ������ �Լ��� �켱�� ��
    */

    AAA* aaa = new AAA();
    //�θ�ü���� �θ��� �Լ��� ����ϸ� �θ��Լ��� ����

    
    //�ڽİ�ü���� �������� �Լ��� ȣ���ϸ� �ڽ����Լ��� ����
    AAA* aa = new BBB();
    aa->Print();
    /*
    �θ�ü�� �ڽ��ν��Ͻ��� �����
    �θ��� �Լ��� ȣ��ȴ�.
    �̸� �������ε��̶��Ѵ�.
    */

    /*
    �������ε�
    �����Ͻ�(���α׷� ���� ��) �θ�ü�� �θ��� �Լ��� ����Ǿ�
    �ڽ��ν��Ͻ��� �־ �θ��� �Լ��� ȣ��Ǵ� ��
    */

    /*
    �������ε�
    ��Ÿ�ӽ�(���α׷� ���� ��) ��ü�� �Լ��� ����ȴ�.
    ���������� ������ �� �ִ�.
    */

    return 0;
}