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
    system("title PDC的注册界面");
    system("cls");
    cout << "你需要输入注册密码,以检验您是否为PDC已验证成员" << endl;
    cin >> a;
    if (strcmp(a, "FACEWALLPLAN") == 0)
    {
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
        system("title cls");
        cout << "注册成功！" << endl;
        Sleep(500);
        cout << "欢迎加入PDC!" << endl;
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
    cout << "请输入您的ID：";
flag1:
    system("title PDC的登陆界面");
    string id;
    string pwd;
    cin >> id;
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
            cout << id << ":" << endl << "欢迎进入PDC内部系统" << "\n" << "你已被PDC监视" << endl;
            cout << " " << endl;
            cout << "(1)Information查看信息" << endl;
            cout << "(2)Your Permissions您的权限" << endl;
            cout << "(3)Your meetings您的会议" << endl;
            cout << "(4)Exit退出" << endl;
            cout << "Choice:";

            int choice;
            cin >> choice; switch (choice)
            {
            case 1:
            {
                system("title 您的个人账号资料");
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
                int quanxian;
                cout << "请输入权限密码：";
                cin >> quanxian;
                if (quanxian == 12083)
                {
                    system("cls");
                    system("title 普通权限");
                    int bumen;
                    cout << "请输入部门暗号：";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title 技术部-普通权限");
                        cout << id << "：" << endl << "您可查看以下内容：" << endl;
                        cout << " " << endl;
                        cout << "1、麦克·伊文斯：一个ETO内的极端分子,在古筝计划中已死亡" << endl;
                        cout << "2、审判日号：一艘油轮,上面的人都是ETO降临派的人,已经销毁" << endl;
                        cout << "3、智子：一个微分子级的超级电脑,能监视这里的一切" << endl;
                        cout << "4、您已没有权限查看下面的内容,请联系高级权限员给您权限," << id << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 军事部-普通权限");
                        cout << id << endl << "您没有权限查看内容,请联系高级权限员给您权限" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 技术部-普通权限");
                        cout << id << "：" << endl << "您可查看以下内容：" << endl;
                        cout << " " << endl;
                        cout << "1、麦克·伊文斯：一个ETO内的极端分子,在古筝计划中已死亡" << endl;
                        cout << "2、审判日号：一艘油轮,上面的人都是ETO降临派的人,已经销毁" << endl;
                        cout << "3、智子：一个微分子级的超级电脑,能监视这里的一切" << endl;
                        cout << "4、您已没有权限查看下面的内容,请联系高级权限员给您权限," << id << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
                if (quanxian == 120830298)
                {
                    system("cls");
                    system("title 高级权限");
                    int bumen;
                    cout << "请输入部门暗号：";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title 技术部-高级权限");
                        cout << id << "：" << endl << "您可查看以下内容：" << endl;
                        cout << " " << endl;
                        cout << "1、麦克·伊文斯：一个ETO内的极端分子,在古筝计划中已死亡" << endl;
                        cout << "2、审判日号：一艘油轮,上面的人都是ETO降临派的人,已经销毁" << endl;
                        cout << "3、智子：一个微分子级的超级电脑,能监视这里的一切" << endl;
                        cout << "4、面壁计划面壁者名单：弗里德里克·泰勒、曼努尔·雷迪亚兹、比尔·希恩斯" << endl;
                        cout << "5、有一位面壁者您无权查看" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 军事部-高级权限");
                        cout << id << "：" << endl << "您可查看以下内容：" << endl;
                        cout << " " << endl;
                        cout << "1、麦克·伊文斯：一个ETO内的极端分子,在古筝计划中已死亡" << endl;
                        cout << "2、审判日号：一艘油轮,上面的人都是ETO降临派的人,已经销毁" << endl;
                        cout << "3、智子：一个微分子级的超级电脑,能监视这里的一切" << endl;
                        cout << "4、面壁计划面壁者名单：弗里德里克·泰勒、曼努尔·雷迪亚兹、比尔·希恩斯" << endl;
                        cout << "5、有一位面壁者您无权查看" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 侦查部-高级权限");
                        cout << id << "：" << endl << "您可查看以下内容：" << endl;
                        cout << " " << endl;
                        cout << "1、麦克·伊文斯：一个ETO内的极端分子,在古筝计划中已死亡" << endl;
                        cout << "2、审判日号：一艘油轮,上面的人都是ETO降临派的人,已经销毁" << endl;
                        cout << "3、智子：一个微分子级的超级电脑,能监视这里的一切" << endl;
                        cout << "4、面壁计划面壁者名单：弗里德里克·泰勒、曼努尔·雷迪亚兹、比尔·希恩斯" << endl;
                        cout << "5、有一位面壁者您无权查看" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
                if (quanxian == 1208302912)
                {
                    system("cls");
                    system("title 最高级权限");
                    int bumen;
                    cout << "请输入部门暗号：";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title 技术部-最高级权限");
                        cout << id << "：" << endl << "您可查看以下内容：" << endl;
                        cout << " " << endl;
                        cout << "1、麦克·伊文斯：一个ETO内的极端分子,在古筝计划中已死亡" << endl;
                        cout << "2、审判日号：一艘油轮,上面的人都是ETO降临派的人,已经销毁" << endl;
                        cout << "3、智子：一个微分子级的超级电脑,能监视这里的一切" << endl;
                        cout << "4、面壁计划面壁者名单：弗里德里克·泰勒、曼努尔·雷迪亚兹、比尔·希恩斯" << endl;
                        cout << "5、最后面壁者：罗辑" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 军事部-最高级权限");
                        cout << id << "：" << endl << "您可查看以下内容：" << endl;
                        cout << " " << endl;
                        cout << "1、麦克·伊文斯：一个ETO内的极端分子,在古筝计划中已死亡" << endl;
                        cout << "2、审判日号：一艘油轮,上面的人都是ETO降临派的人,已经销毁" << endl;
                        cout << "3、智子：一个微分子级的超级电脑,能监视这里的一切" << endl;
                        cout << "4、面壁计划面壁者名单：弗里德里克·泰勒、曼努尔·雷迪亚兹、比尔·希恩斯" << endl;
                        cout << "5、最后面壁者：罗辑" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 侦查部-最高级权限");
                        cout << id << "：" << endl << "您可查看以下内容：" << endl;
                        cout << " " << endl;
                        cout << "1、麦克·伊文斯：一个ETO内的极端分子,在古筝计划中已死亡" << endl;
                        cout << "2、审判日号：一艘油轮,上面的人都是ETO降临派的人,已经销毁" << endl;
                        cout << "3、智子：一个微分子级的超级电脑,能监视这里的一切" << endl;
                        cout << "4、面壁计划面壁者名单：弗里德里克·泰勒、曼努尔·雷迪亚兹、比尔·希恩斯" << endl;
                        cout << "5、最后面壁者：罗辑" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
            }
            case 3:
            {
                int quanxian2;
                cout << "请输入权限密码：";
                cin >> quanxian2;
                if (quanxian2 == 12083)
                {
                    system("cls");
                    system("title 普通权限");
                    int bumen;
                    cout << "请输入部门暗号：";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title 技术部-普通权限");
                        cout << id << "：" << endl << "您目前暂无会议" << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 军事部-普通权限");
                        cout << id << endl << "您目前暂无会议" << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 技术部-普通权限");
                        cout << id << "：" << endl << "您目前暂无会议" << endl;
                        MAXN();
                    }
                }
                if (quanxian2 == 120830298)
                {
                    system("cls");
                    system("title 高级权限");
                    int bumen;
                    cout << "请输入部门暗号：";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title 技术部-高级权限");
                        cout << id << "：" << endl << "您的会议：" << endl;
                        cout << "  会议名称               会议地点               会议时间" << endl;
                        cout << "面壁计划发布会          01号会议室           8月21日早上9：00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 军事部-高级权限");
                        cout << id << "：" << endl << "您的会议：" << endl;
                        cout << "  会议名称               会议地点               会议时间" << endl;
                        cout << "面壁计划发布会          01号会议室           8月21日早上9：00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 侦查部-高级权限");
                        cout << id << "：" << endl << "您的会议：" << endl;
                        cout << "  会议名称               会议地点               会议时间" << endl;
                        cout << "面壁计划发布会          01号会议室           8月21日早上9：00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                }
                if (quanxian2 == 1208302912)
                {
                    system("cls");
                    system("title 最高级权限");
                    int bumen;
                    cout << "请输入部门暗号：";
                    cin >> bumen;
                    if (bumen == 2131928472)
                    {
                        system("cls");
                        system("title 技术部-最高级权限");
                        cout << id << "：" << endl << "您的会议：" << endl;
                        cout << "  会议名称               会议地点               会议时间" << endl;
                        cout << "面壁计划发布会          01号会议室           8月21日早上9：00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 军事部-最高级权限");
                        cout << id << "：" << endl << "您的会议：" << endl;
                        cout << "  会议名称               会议地点               会议时间" << endl;
                        cout << "面壁计划发布会          01号会议室           8月21日早上9：00" << endl;
                        cout << " " << endl;
                        MAXN();
                    }
                    if (bumen == 2131928471)
                    {
                        system("cls");
                        system("title 侦查部-最高级权限");
                        cout << id << "：" << endl << "您的会议：" << endl;
                        cout << "  会议名称               会议地点               会议时间" << endl;
                        cout << "面壁计划发布会          01号会议室           8月21日早上9：00" << endl;
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
    cout << "该ID不存在，请重新输入:";
    goto flag1;
}

void MAXN()
{
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
    system("color 7C");
    MAXN();
    cin.get();
    return 0;
}
