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
    char a[100 + 5];
    int MIANBIJIHUA;
    cout << "������ע�ᰵ�ţ�";
    cin >> a;
    if (strcmp(a, "MIANBIJIHUA") == 0)
    {
        string pw1;
        string pw2;
        user person;
        system("title PDCע�����");
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
            cout << "ע��ɹ���" << endl;
            cout << "��ӭ����PDC" << endl;
            cout << " " << endl;
            person.Password = pw1;
            people.push_back(person);
            system("cls");
            MAXN();
    }
    else
    {
        cout << "ע��ʧ��,���IP�Ѷ���,����IP��ַ�ѱ�¶,PDC��Ȩ������е���" << endl;
        cout << "һ����������Ŀ����Ա,����������";
        return;
    }
}

void user::Enter()
{
    cout << "����������ID��";
flag1:
    system("title PDC�ĵ�½����");
    string id;
    string pwd;
    int a;
    cin >> id;
    cout << "������Ȩ������:";
    cin >> a;
    if (a == 123456789)
    {
        system("cls");
        system("title ��ͨϵͳ");
        cout << id << ":" << endl << "��ӭ�������ͨϵͳ" << endl;
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
                cout << id << ":" << endl << "���ѽ���PDC�ڲ�ϵͳ" << "\n" << "���Ѿ�������" << endl;
                cout << " " << endl;
                cout << "(1)Information�鿴��Ϣ" << endl;
                cout << "(2)PDC�ҵ���ETO����" << endl;
                cout << "(3)���Ļ���" << endl;
                cout << "(4)����Ȩ��" << endl;
                cout << "(5)��ڼƻ�����Ҫ��������" << endl;
                cout << "(6)Exit�˳�" << endl;
                cout << "Choice:";

                int choice;
                cin >> choice; switch (choice)
                {
                case 1:
                {
                    system("title �����˺�����");
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
                    system("title PDC�ҵ�ETO����");
                    system("cls");
                    int anhao;
                    cout << "�������㲿�ŵİ��ţ�";
                    cin >> anhao;
                    if (anhao == 72343235423839)
                    {
                        system("title ��ͨ����-���²�");
                        system("cls");
                        cout << "��û��Ȩ�޿��κ�����,�Բ���" << endl;
                        cout << "ȥ������Ҫ�ɵ���";
                        cout << " " << endl;
                        goto flag1;
                    }
                    if (anhao == 111112323383278)
                    {
                        system("title ��ͨ����-������");
                        system("cls");
                        cout << "���ӣ�һ��΢������,��������������ĳ��������" << endl;
                        cout << "       �ܼ���һ��,�����Ӳ����˵�˼ά" << endl;
                        cout << "ETO���������Ѿ��߽�,�Ҵ����Ѳ����ڴ���֯,ֻʣ������."<< endl;
                        cout << "     ETO�����߽�" << endl;
                        cout << "��ˡ�����˹��ETO����,���˷���" << endl;
                        cout << "���形�ӣ���֪�Ƿ����,����Ҷ�Ľ����Ϣ��˵,�����Ѿ�������" << endl;
                        cout << " " << endl;
                        goto flag1;
                    }
                    if (anhao == 1827392372392372)
                    {
                        system("title ��ͨ����-���Ӳ�");
                        system("cls");
                        cout << "ETO����������֯" << endl;
                        cout << "Ψһ����Ϣ�������������ɱ��" << endl;
                        cout << "�޼���ɱ��" << endl;
                        cout << "�޼�,��һ����ͨ��";
                        cout << " " << endl;
                        goto flag1;
                    }
                }
                case 3:
                {
                    system("title ���Ļ���");
                    system("cls");
                    int anhao;
                    cout << "�������㲿�ŵİ��ţ�";
                    cin >> anhao;
                    if (anhao == 72343235423839)
                    {
                        system("title ������Ϣ-���²�");
                        system("cls");
                        cout << "���޻���";
                        cout << " " << endl;
                        goto flag1;
                    }
                    if (anhao == 111112323383278)
                    {
                        system("title ������Ϣ-������");
                        system("cls");
                        cout << "���޻���" << endl;
                        cout << " " << endl;
                        goto flag1;
                    }
                    if (anhao == 1827392372392372)
                    {
                        system("title ������Ϣ-���Ӳ�");
                        system("cls");
                        cout << " ��������               ����ʱ��               ����ص�" << endl;
                        cout << "��ETO������              15��00              ���Ӳ�������" << endl;
                        cout << " " << endl;
                        goto flag1;
                    }
                }
                case 4:
                {
                    system("title ����Ȩ��");
                    system("cls");
                    cout << "�鿴���ϣ������²��⣩";
                    cout << "�ڷ����ɵ�����������";
                    cout << " " << endl;
                    goto flag1;
                }
                case 5:
                {
                    system("title ������ڼƻ���������");
                    system("cls");
                    cout << "��ֻ���������Ĺ���,������߿��ܻ��õ���,ʱ������׼��" << endl;
                    cout << " " << endl;
                    goto flag1;
                }
                case 6:
                    exit(EXIT_FAILURE);
                }
            }
        }
        cout << "��ID�����ڣ�����������:";
        goto flag1;
    }
    if (a == 01021235674)
    {
        system("cls");
        system("title PDC�߼�ϵͳ");
        cout << id << ":" << endl << "��ӭ����PDC�߼�ϵͳ��" << endl;
        for (int i = 0; i < people.size(); i++) {
            int tk = 1; tk++;
            if (people.at(i).ID == id) {
                tk = 2;
                cout << "�������������룺";
            flag3:
                cin >> pwd;
                if (people.at(i).Password != pwd) {
                    cout << "�����������������:";
                    goto flag3;
                }
                system("cls");
                cout << "��¼�ɹ���" << endl;
                cout << " " << endl;
                cout << id << ":" << endl << "���ѽ���PDC�ڲ�ϵͳ" << "\n" << "���Ѿ�������" << endl;
                cout << " " << endl;
                cout << "(1)Information�鿴��Ϣ" << endl;
                cout << "(2)PDC�ҵ���ETO����" << endl;
                cout << "(3)���Ļ���" << endl;
                cout << "(4)����Ȩ��" << endl;
                cout << "(5)��ڼƻ�����Ҫ��������" << endl;
                cout << "(6)Exit�˳�" << endl;
                cout << "Choice:";

                int choice;
                cin >> choice; switch (choice)
                {
                case 1:
                {
                    system("title �����˺�����");
                    system("cls");
                    cout << " " << endl;
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
                    system("��δ����");
                }
                case 3:
                {
                    system("��δ����");
                }
                case 4:
                {
                    system("��δ����");
                }
                case 5:
                {
                    system("��δ����");
                }
                case 6:
                    exit(EXIT_FAILURE);
                }
            }
        }
        cout << "��ID�����ڣ�����������:";
        goto flag1;
    }
}

void MAXN()
{
    system("color 7C");
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
    int JH;
    cin >> JH;
    if (JH == 532123)
    {
        system("cls");
        MAXN();
        cin.get();
        return 0;
    }
    else
        return 0;
}
