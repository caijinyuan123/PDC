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
    cout << "请输入注册暗号：";
    cin >> a;
    if (strcmp(a, "MIANBIJIHUA") == 0)
    {
        string pw1;
        string pw2;
        user person;
        system("title PDC注册界面");
        cout << "请设置您的ID：";
        flag:
            cin >> person.ID;
            for (int i = 0; i < people.size(); i++) {
                if (people.at(i).ID == person.ID) {
                    cout << "该ID已存在，请重新设置:";
                    goto flag;
                }
            }
            cout << "请设置您的用户名：";
            cin >> person.Name;
            cout << "请绑定您的邮箱：";
            cin >> person.Email;
            cout << "请设置您的密码：";
        flag0:
            cin >> pw1;
            cout << "请再次确认您的密码：";
            cin >> pw2;
            if (pw1 != pw2)
            {
               cout << "前后两次输入密码不一致，请重新设置密码:";
               goto flag0;
            }
            cout << "注册成功！" << endl;
            cout << "欢迎加入PDC" << endl;
            cout << " " << endl;
            person.Password = pw1;
            people.push_back(person);
            system("cls");
            MAXN();
    }
    else
    {
        cout << "注册失败,你的IP已冻结,您的IP地址已暴露,PDC有权对你进行调查" << endl;
        cout << "一经发现你是目标人员,您将被逮捕";
        return;
    }
}

void user::Enter()
{
    cout << "请输入您的ID：";
flag1:
    system("title PDC的登陆界面");
    string id;
    string pwd;
    int a;
    cin >> id;
    cout << "请输入权限密码:";
    cin >> a;
    if (a == 123456789)
    {
        system("cls");
        system("title 普通系统");
        cout << id << ":" << endl << "欢迎你进入普通系统" << endl;
        for (int i = 0; i < people.size(); i++) {
            int tk = 1; tk++;
            if (people.at(i).ID == id) {
                tk = 2;
                cout << "请输入您的密码：";
            flag2:
                cin >> pwd;
                if (people.at(i).Password != pwd) {
                    cout << "密码错误，请重新输入:";
                    goto flag2;
                }
                system("cls");
                cout << "登录成功！" << endl;
                cout << " " << endl;
                cout << id << ":" << endl << "您已进入PDC内部系统" << "\n" << "您已经被监视" << endl;
                cout << " " << endl;
                cout << "(1)Information查看信息" << endl;
                cout << "(2)PDC找到的ETO资料" << endl;
                cout << "(3)您的会议" << endl;
                cout << "(4)您的权限" << endl;
                cout << "(5)面壁计划您需要做的事情" << endl;
                cout << "(6)Exit退出" << endl;
                cout << "Choice:";

                int choice;
                cin >> choice; switch (choice)
                {
                case 1:
                {
                    system("title 个人账号资料");
                    system("cls");
                    cout << id << "：" << endl << "您的个人资料为：" << endl;
                    cout << "您的ID为：" << people.at(i).ID << endl;
                    cout << "您的密码为：" << people.at(i).Password << endl;
                    cout << "您的用户名为：" << people.at(i).Name << endl;
                    cout << "您的邮箱为：" << people.at(i).Email << endl;
                    cout << " " << endl;
                    MAXN();
                }
                case 2:
                {
                    system("title PDC找的ETO资料");
                    system("cls");
                    int anhao;
                    cout << "请输入你部门的暗号：";
                    cin >> anhao;
                    if (anhao == 72343235423839)
                    {
                        system("title 普通资料-军事部");
                        system("cls");
                        cout << "您没有权限看任何资料,对不起" << endl;
                        cout << "去干你们要干的事";
                        cout << " " << endl;
                        goto flag1;
                    }
                    if (anhao == 111112323383278)
                    {
                        system("title 普通资料-技术部");
                        system("cls");
                        cout << "智子：一个微观粒子,由三体文明打造的超级计算机" << endl;
                        cout << "       能监视一切,但监视不了人的思维" << endl;
                        cout << "ETO：拯救派已经瓦解,幸存派已不属于此组织,只剩降临派."<< endl;
                        cout << "     ETO基本瓦解" << endl;
                        cout << "麦克·伊文斯：ETO领袖,极端分子" << endl;
                        cout << "三体舰队：不知是否出发,但以叶文洁的消息来说,他们已经出发了" << endl;
                        cout << " " << endl;
                        goto flag1;
                    }
                    if (anhao == 1827392372392372)
                    {
                        system("title 普通资料-监视部");
                        system("cls");
                        cout << "ETO暗网上有组织" << endl;
                        cout << "唯一的信息：来自三体的诛杀令" << endl;
                        cout << "罗辑诛杀令" << endl;
                        cout << "罗辑,是一个普通人";
                        cout << " " << endl;
                        goto flag1;
                    }
                }
                case 3:
                {
                    system("title 您的会议");
                    system("cls");
                    int anhao;
                    cout << "请输入你部门的暗号：";
                    cin >> anhao;
                    if (anhao == 72343235423839)
                    {
                        system("title 会议信息-军事部");
                        system("cls");
                        cout << "暂无会议";
                        cout << " " << endl;
                        goto flag1;
                    }
                    if (anhao == 111112323383278)
                    {
                        system("title 会议信息-技术部");
                        system("cls");
                        cout << "暂无会议" << endl;
                        cout << " " << endl;
                        goto flag1;
                    }
                    if (anhao == 1827392372392372)
                    {
                        system("title 会议信息-监视部");
                        system("cls");
                        cout << " 会议主题               会议时间               会议地点" << endl;
                        cout << "对ETO的讨论              15：00              监视部会议室" << endl;
                        cout << " " << endl;
                        goto flag1;
                    }
                }
                case 4:
                {
                    system("title 您的权限");
                    system("cls");
                    cout << "查看资料（除军事部外）";
                    cout << "在凡尔纳岛工作、生活";
                    cout << " " << endl;
                    goto flag1;
                }
                case 5:
                {
                    system("title 您在面壁计划该做的事");
                    system("cls");
                    cout << "您只用做好您的工作,但面壁者可能会用到你,时刻做好准备" << endl;
                    cout << " " << endl;
                    goto flag1;
                }
                case 6:
                    exit(EXIT_FAILURE);
                }
            }
        }
        cout << "该ID不存在，请重新输入:";
        goto flag1;
    }
    if (a == 01021235674)
    {
        system("cls");
        system("title PDC高级系统");
        cout << id << ":" << endl << "欢迎进入PDC高级系统！" << endl;
        for (int i = 0; i < people.size(); i++) {
            int tk = 1; tk++;
            if (people.at(i).ID == id) {
                tk = 2;
                cout << "请输入您的密码：";
            flag3:
                cin >> pwd;
                if (people.at(i).Password != pwd) {
                    cout << "密码错误，请重新输入:";
                    goto flag3;
                }
                system("cls");
                cout << "登录成功！" << endl;
                cout << " " << endl;
                cout << id << ":" << endl << "您已进入PDC内部系统" << "\n" << "您已经被监视" << endl;
                cout << " " << endl;
                cout << "(1)Information查看信息" << endl;
                cout << "(2)PDC找到的ETO资料" << endl;
                cout << "(3)您的会议" << endl;
                cout << "(4)您的权限" << endl;
                cout << "(5)面壁计划您需要做的事情" << endl;
                cout << "(6)Exit退出" << endl;
                cout << "Choice:";

                int choice;
                cin >> choice; switch (choice)
                {
                case 1:
                {
                    system("title 个人账号资料");
                    system("cls");
                    cout << " " << endl;
                    cout << id << "：" << endl << "您的个人资料为：" << endl;
                    cout << "您的ID为：" << people.at(i).ID << endl;
                    cout << "您的密码为：" << people.at(i).Password << endl;
                    cout << "您的用户名为：" << people.at(i).Name << endl;
                    cout << "您的邮箱为：" << people.at(i).Email << endl;
                    cout << " " << endl;
                    MAXN();
                }
                case 2:
                {
                    system("暂未开发");
                }
                case 3:
                {
                    system("暂未开发");
                }
                case 4:
                {
                    system("暂未开发");
                }
                case 5:
                {
                    system("暂未开发");
                }
                case 6:
                    exit(EXIT_FAILURE);
                }
            }
        }
        cout << "该ID不存在，请重新输入:";
        goto flag1;
    }
}

void MAXN()
{
    system("color 7C");
    system("title PDC内部系统");
    cout << "(1)Register注册" << endl;
    cout << "(2)Enter登录" << endl;
    cout << "(3)Exit退出" << endl;
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
