#include<stdio.h>

class CCC
{
public:
    void Pirnt() { printf("�θ�Ŭ����\n"); }
    virtual void VirtualPrint() { printf("�θ𰡻��Լ�\n"); }
    //�����Լ�
};

class DDD : public CCC
{
public:
    void Pirnt() { printf("�ڽ�Ŭ����\n"); }
    virtual void VirtualPrint() { printf("�ڽİ����Լ�\n"); }
};

int main35()
{
    /*
    �����Լ�
    �θ�Ŭ�������Լ� �ڽ�Ŭ�������� �������� ���� ����ϰ� ������ �Լ�
    �����Լ��� �ڽ�Ŭ�������� ������ �� �������� ��ü��
    �����Լ��� ����ϸ� �������ε��� �ȴ�.
    */

    //�������ε�
    //�����Ͻ� ��ü�� �Լ��� �����
    CCC* ccc = new DDD();//�θ�ü�� �ڽ��� ������
    ccc->Pirnt(); //�θ��� �Լ��� ȣ��

    //�������ε�
    //��Ÿ�ӽ� ��ü�� �Լ��� �����
    CCC* cc = new DDD();
    cc->VirtualPrint();//�ڽ��� �Լ��� ȣ��


    return 0;
}