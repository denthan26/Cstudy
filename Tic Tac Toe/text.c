//����������

#include "game.h"

void menu()
{
	printf("*******************\n");
	printf("***1.PLAY 0.EXIT***\n");
	printf("*******************\n");
}
//��Ϸ��ʵ��
void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ǿո�
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);

}
void text()
{
	int input = 0;
	do
	{
		
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}