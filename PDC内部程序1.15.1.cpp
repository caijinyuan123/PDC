#include<iostream>
#include<string>
#include <vector>
#include <conio.h>
#include<Windows.h>
void MAXN();
void Register();
void Enter();
using namespace std;

class user {
private:
    string ID;
    string Name;
    string Email;
    string Password;
public:
    user() {};
    void Register();
    void Enter();
};
vector<user> people;

void user::Register()
{
    char a[10];
    int FACEWALLPLAN;
    string pw1;
    string pw2;
    user person;
    system("title PDC��ע�����");
    system("cls");
    cout << "����Ҫ����ע������,�Լ������Ƿ�ΪPDC����֤��Ա" << endl;
    cin >> a;
    if (strcmp(a, "FACEWALLPLAN") == 0)
    {
        cout << "����������ID��";
    flag:
        cin >> person.ID;
        for (int i = 0; i < people.size(); i++) {
            if (people.at(i).ID == person.ID) {
                cout << "��ID�Ѵ��ڣ�����������:";
                goto flag;
            }
        }
        cout << "�����������û�����";
        cin >> person.Name;
        cout << "����������䣺";
        cin >> person.Email;
        cout << "�������������룺";
    flag0:
        cin >> pw1;
        cout << "���ٴ�ȷ���������룺";
        cin >> pw2;
        if (pw1 != pw2)
        {
            cout << "ǰ�������������벻һ�£���������������:";
            goto flag0;
        }
        system("title cls");
        cout << "ע��ɹ���" << endl;
        Sleep(500);
        cout << "��ӭ����PDC!" << endl;
        Sleep(1000);
        cout << " " << endl;
        person.Password = pw1;
        people.push_back(person);
        system("cls");
        MAXN();
    }
    else
    {
        cout << "Sorry, you are not a PDC verified member and you cannot register";
        return;
    }
}

void user::Enter()
{
    system("cls");
    cout << "����������ID��";
flag1:
    system("title PDC�ĵ�½����");
    string id;
    string pwd;
    cin >> id;
    for (int i = 0; i < people.size(); i++) {
        int tk = 1; tk++;
        if (people.at(i).ID == id) {
            tk = 2;
            cout << "�������������룺";
        flag2:
            cin >> pwd;
            if (people.at(i).Password != pwd) {
                cout << "�����������������:";
                goto flag2;
            }
            system("cls");
            cout << "��¼�ɹ���" << endl;
            cout << " " << endl;
            cout << id << ":" << endl << "��ӭ����PDC�ڲ�ϵͳ" << "\n" << "���ѱ�PDC����" << endl;
            cout << " " << endl;
            cout << "(1)Information�鿴��Ϣ" << endl;
            cout << "(2)Your Permissions����Ȩ��" << endl;
            cout << "(3)Your meetings���Ļ���" << endl;
            cout << "(4)Exit�˳�" << endl;
            cout << "Choice:";

            int choice;
            cin >> choice; switch (choice)
            {
            case 1:
            {
                system("title ���ĸ����˺�����");
                system("cls");
                cout << id << "��" << endl << "���ĸ�������Ϊ��" << endl;
                cout << "����IDΪ��" << people.at(i).ID << endl;
                cout << "��������Ϊ��" << people.at(i).Password << endl;
                cout << "�����û���Ϊ��" << people.at(i).Name << endl;
                cout << "��������Ϊ��" << people.at(i).Email << endl;
                cout << " " << endl;
                MAXN();
            }
            case 2:
            {
                int quanxian;
                cout << "������Ȩ�����룺";
                cin >> quanxian;
                if (quanxian == 12083)
                {
                    system("cls");
                    system("title ��ͨȨ��");
                    int bumen;
                    cout << "�����벿�Ű��ţ�";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title ������-��ͨȨ��");
                        cout << id << "��" << endl << "���ɲ鿴�������ݣ�" << endl;
                        cout << " " << endl;
                        cout << "1����ˡ�����˹��һ��ETO�ڵļ��˷���,�ڹ��ݼƻ���������" << endl;
                        cout << "2�������պţ�һ������,������˶���ETO�����ɵ���,�Ѿ�����" << endl;
                        cout << "3�����ӣ�һ��΢���Ӽ��ĳ�������,�ܼ��������һ��" << endl;
                        cout << "4������û��Ȩ�޲鿴���������,����ϵ�߼�Ȩ��Ա����Ȩ��," << id << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ���²�-��ͨȨ��");
                        cout << id << endl << "��û��Ȩ�޲鿴����,����ϵ�߼�Ȩ��Ա����Ȩ��" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ������-��ͨȨ��");
                        cout << id << "��" << endl << "���ɲ鿴�������ݣ�" << endl;
                        cout << " " << endl;
                        cout << "1����ˡ�����˹��һ��ETO�ڵļ��˷���,�ڹ��ݼƻ���������" << endl;
                        cout << "2�������պţ�һ������,������˶���ETO�����ɵ���,�Ѿ�����" << endl;
                        cout << "3�����ӣ�һ��΢���Ӽ��ĳ�������,�ܼ��������һ��" << endl;
                        cout << "4������û��Ȩ�޲鿴���������,����ϵ�߼�Ȩ��Ա����Ȩ��," << id << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
                if (quanxian == 120830298)
                {
                    system("cls");
                    system("title �߼�Ȩ��");
                    int bumen;
                    cout << "�����벿�Ű��ţ�";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title ������-�߼�Ȩ��");
                        cout << id << "��" << endl << "���ɲ鿴�������ݣ�" << endl;
                        cout << " " << endl;
                        cout << "1����ˡ�����˹��һ��ETO�ڵļ��˷���,�ڹ��ݼƻ���������" << endl;
                        cout << "2�������պţ�һ������,������˶���ETO�����ɵ���,�Ѿ�����" << endl;
                        cout << "3�����ӣ�һ��΢���Ӽ��ĳ�������,�ܼ��������һ��" << endl;
                        cout << "4����ڼƻ�������������������ˡ�̩�ա���Ŭ�����׵����ȡ��ȶ���ϣ��˹" << endl;
                        cout << "5����һλ���������Ȩ�鿴" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ���²�-�߼�Ȩ��");
                        cout << id << "��" << endl << "���ɲ鿴�������ݣ�" << endl;
                        cout << " " << endl;
                        cout << "1����ˡ�����˹��һ��ETO�ڵļ��˷���,�ڹ��ݼƻ���������" << endl;
                        cout << "2�������պţ�һ������,������˶���ETO�����ɵ���,�Ѿ�����" << endl;
                        cout << "3�����ӣ�һ��΢���Ӽ��ĳ�������,�ܼ��������һ��" << endl;
                        cout << "4����ڼƻ�������������������ˡ�̩�ա���Ŭ�����׵����ȡ��ȶ���ϣ��˹" << endl;
                        cout << "5����һλ���������Ȩ�鿴" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ��鲿-�߼�Ȩ��");
                        cout << id << "��" << endl << "���ɲ鿴�������ݣ�" << endl;
                        cout << " " << endl;
                        cout << "1����ˡ�����˹��һ��ETO�ڵļ��˷���,�ڹ��ݼƻ���������" << endl;
                        cout << "2�������պţ�һ������,������˶���ETO�����ɵ���,�Ѿ�����" << endl;
                        cout << "3�����ӣ�һ��΢���Ӽ��ĳ�������,�ܼ��������һ��" << endl;
                        cout << "4����ڼƻ�������������������ˡ�̩�ա���Ŭ�����׵����ȡ��ȶ���ϣ��˹" << endl;
                        cout << "5����һλ���������Ȩ�鿴" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
                if (quanxian == 1208302912)
                {
                    system("cls");
                    system("title ��߼�Ȩ��");
                    int bumen;
                    cout << "�����벿�Ű��ţ�";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title ������-��߼�Ȩ��");
                        cout << id << "��" << endl << "���ɲ鿴�������ݣ�" << endl;
                        cout << " " << endl;
                        cout << "1����ˡ�����˹��һ��ETO�ڵļ��˷���,�ڹ��ݼƻ���������" << endl;
                        cout << "2�������պţ�һ������,������˶���ETO�����ɵ���,�Ѿ�����" << endl;
                        cout << "3�����ӣ�һ��΢���Ӽ��ĳ�������,�ܼ��������һ��" << endl;
                        cout << "4����ڼƻ�������������������ˡ�̩�ա���Ŭ�����׵����ȡ��ȶ���ϣ��˹" << endl;
                        cout << "5���������ߣ��޼�" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ���²�-��߼�Ȩ��");
                        cout << id << "��" << endl << "���ɲ鿴�������ݣ�" << endl;
                        cout << " " << endl;
                        cout << "1����ˡ�����˹��һ��ETO�ڵļ��˷���,�ڹ��ݼƻ���������" << endl;
                        cout << "2�������պţ�һ������,������˶���ETO�����ɵ���,�Ѿ�����" << endl;
                        cout << "3�����ӣ�һ��΢���Ӽ��ĳ�������,�ܼ��������һ��" << endl;
                        cout << "4����ڼƻ�������������������ˡ�̩�ա���Ŭ�����׵����ȡ��ȶ���ϣ��˹" << endl;
                        cout << "5���������ߣ��޼�" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ��鲿-��߼�Ȩ��");
                        cout << id << "��" << endl << "���ɲ鿴�������ݣ�" << endl;
                        cout << " " << endl;
                        cout << "1����ˡ�����˹��һ��ETO�ڵļ��˷���,�ڹ��ݼƻ���������" << endl;
                        cout << "2�������պţ�һ������,������˶���ETO�����ɵ���,�Ѿ�����" << endl;
                        cout << "3�����ӣ�һ��΢���Ӽ��ĳ�������,�ܼ��������һ��" << endl;
                        cout << "4����ڼƻ�������������������ˡ�̩�ա���Ŭ�����׵����ȡ��ȶ���ϣ��˹" << endl;
                        cout << "5���������ߣ��޼�" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
            }
            case 3:
            {
                int quanxian2;
                cout << "������Ȩ�����룺";
                cin >> quanxian2;
                if (quanxian2 == 12083)
                {
                    system("cls");
                    system("title ��ͨȨ��");
                    int bumen;
                    cout << "�����벿�Ű��ţ�";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title ������-��ͨȨ��");
                        cout << id << "��" << endl << "��Ŀǰ���޻���" << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ���²�-��ͨȨ��");
                        cout << id << endl << "��Ŀǰ���޻���" << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ������-��ͨȨ��");
                        cout << id << "��" << endl << "��Ŀǰ���޻���" << endl;
                        MAXN();
                    }
                }
                if (quanxian2 == 120830298)
                {
                    system("cls");
                    system("title �߼�Ȩ��");
                    int bumen;
                    cout << "�����벿�Ű��ţ�";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title ������-�߼�Ȩ��");
                        cout << id << "��" << endl << "���Ļ��飺" << endl;
                        cout << "  ��������               ����ص�               ����ʱ��" << endl;
                        cout << "��ڼƻ�������          01�Ż�����           8��21������9��00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ���²�-�߼�Ȩ��");
                        cout << id << "��" << endl << "���Ļ��飺" << endl;
                        cout << "  ��������               ����ص�               ����ʱ��" << endl;
                        cout << "��ڼƻ�������          01�Ż�����           8��21������9��00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ��鲿-�߼�Ȩ��");
                        cout << id << "��" << endl << "���Ļ��飺" << endl;
                        cout << "  ��������               ����ص�               ����ʱ��" << endl;
                        cout << "��ڼƻ�������          01�Ż�����           8��21������9��00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
                if (quanxian2 == 1208302912)
                {
                    system("cls");
                    system("title ��߼�Ȩ��");
                    int bumen;
                    cout << "�����벿�Ű��ţ�";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title ������-��߼�Ȩ��");
                        cout << id << "��" << endl << "���Ļ��飺" << endl;
                        cout << "  ��������               ����ص�               ����ʱ��" << endl;
                        cout << "��ڼƻ�������          01�Ż�����           8��21������9��00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ���²�-��߼�Ȩ��");
                        cout << id << "��" << endl << "���Ļ��飺" << endl;
                        cout << "  ��������               ����ص�               ����ʱ��" << endl;
                        cout << "��ڼƻ�������          01�Ż�����           8��21������9��00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title ��鲿-��߼�Ȩ��");
                        cout << id << "��" << endl << "���Ļ��飺" << endl;
                        cout << "  ��������               ����ص�               ����ʱ��" << endl;
                        cout << "��ڼƻ�������          01�Ż�����           8��21������9��00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
            }
            case 4:
                exit(EXIT_FAILURE);
            }
        }
    }
    cout << "��ID�����ڣ�����������:";
    goto flag1;
}

void MAXN()
{
    system("title PDC�ڲ�ϵͳ");
    cout << "(1)Registerע��" << endl;
    cout << "(2)Enter��¼" << endl;
    cout << "(3)Exit�˳�" << endl;
    cout << "Choice:";
    int choice;
    user u;
    cin >> choice; switch (choice)
    {
    case 1:
        u.Register();
        break;
    case 2:
        u.Enter();
        break;
    case 3:
        exit(EXIT_FAILURE);
    }
}

int main()
{
    system("color 7C");
    MAXN();
    cin.get();
    return 0;
}
