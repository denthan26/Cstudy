//ѧ����Ϣ����ϵͳ
#include "text.h"
//ϵͳ�˵�
void SXmenu()
{
	printf("**************************\n");
	printf("****    1.¼��        ****\n");
	printf("****    2.��ʾ        ****\n");
	printf("****    3.����        ****\n");
	printf("****    4.�޸�        ****\n");
	printf("****    5.ɾ��        ****\n");
	printf("****    6.����        ****\n");
	printf("****    7.ͳ��        ****\n");
	printf("****    8.������Ϣ    ****\n");
	printf("****    9.�ļ���ȡ    ****\n");
	printf("****    0.�˳�        ****\n");
	printf("**************************\n");
}
//ѧ����Ϣ����ϵͳ
void SXMS()
{
	int input = 0;
	do
	{
		SXmenu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0://�˳�
			break;
		case 1://¼��
			entry();
			break;
		case 2://��ʾ
			break;
		case 3://����
			break;
		case 4://�޸�
			break;
		case 5://ɾ��
			break;
		case 6://����
			break;
		case 7://ͳ��
			break;
		case 8://�����ļ�
			break;
		case 9://�ļ���ȡ
			break;
		default:
			break;
		}
	} while (input);
}
//����˵�
void login_menu()
{
	printf("*******************\n");
	printf("**1.LOGIN  0.EXIT**\n");
	printf("*******************\n");
}
//�����û���������
void login()
{
	char user_name[20] = { 0 };
	char user_password[20] = { 0 };
	again:
	printf("�������û�����>");
	scanf("%s", &user_name);
	printf("���������룺>");
	scanf("%s", &user_password);
	if (strcmp(user_name, "dengxuan") == 0 && strcmp(user_password, "123456") == 0)
	{
		printf("����ѧ������ϵͳ\n");
		SXMS();
	}
	else
	{
		printf("�û����������������������\n");
		goto again;
	}

}


int main()
{
	//�ж��Ƿ����ϵͳ
	//1.���� 2.��1.�˳�
	int ret = 0;
	login_menu();
	printf("�����룺>");
	scanf("%d", &ret);
	if (ret == 1)
	{
		login();
	}
	else
	{
		printf("�ټ�\n");
	}
	return 0;
}