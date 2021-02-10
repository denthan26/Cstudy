//学生信息管理系统
#include "text.h"
//系统菜单
void SXmenu()
{
	printf("**************************\n");
	printf("****    1.录入        ****\n");
	printf("****    2.显示        ****\n");
	printf("****    3.查找        ****\n");
	printf("****    4.修改        ****\n");
	printf("****    5.删除        ****\n");
	printf("****    6.排序        ****\n");
	printf("****    7.统计        ****\n");
	printf("****    8.保存信息    ****\n");
	printf("****    9.文件提取    ****\n");
	printf("****    0.退出        ****\n");
	printf("**************************\n");
}
//学生信息管理系统
void SXMS()
{
	int input = 0;
	do
	{
		SXmenu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0://退出
			break;
		case 1://录入
			entry();
			break;
		case 2://显示
			break;
		case 3://查找
			break;
		case 4://修改
			break;
		case 5://删除
			break;
		case 6://排序
			break;
		case 7://统计
			break;
		case 8://保存文件
			break;
		case 9://文件提取
			break;
		default:
			break;
		}
	} while (input);
}
//登入菜单
void login_menu()
{
	printf("*******************\n");
	printf("**1.LOGIN  0.EXIT**\n");
	printf("*******************\n");
}
//输入用户名和密码
void login()
{
	char user_name[20] = { 0 };
	char user_password[20] = { 0 };
	again:
	printf("请输入用户名：>");
	scanf("%s", &user_name);
	printf("请输入密码：>");
	scanf("%s", &user_password);
	if (strcmp(user_name, "dengxuan") == 0 && strcmp(user_password, "123456") == 0)
	{
		printf("进入学生管理系统\n");
		SXMS();
	}
	else
	{
		printf("用户名或密码错误，请重新输入\n");
		goto again;
	}

}


int main()
{
	//判断是否进入系统
	//1.进入 2.非1.退出
	int ret = 0;
	login_menu();
	printf("请输入：>");
	scanf("%d", &ret);
	if (ret == 1)
	{
		login();
	}
	else
	{
		printf("再见\n");
	}
	return 0;
}