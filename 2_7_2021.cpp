//�������¶ȼƲ������û����¶�98��F������Ҫ����C����ʵ�ְ���ת��Ϊ�����Ϸ���ʾ���¶ȡ�
//���϶ȵ��ھŷ�֮����Ի��϶ȼ�ȥ32�Ļ�
//#include <stdio.h>
//int main()
//{
//	float F = 98.0;
//	float C = 0.0;
//	float tmp = 0.0;
//	tmp = F - 32;
//	tmp = 5 * tmp;
//	C = tmp / 9;
//	printf("%f��C\n", C);
//	return 0;
//}
//#include<stdio.h>//ͷ�ļ�
//int main() //������
//{
//	float f_Degree, centigrade; //���帡���ͱ���
//	f_Degree = 98.0;//��ʼ�����϶ȱ���
//	centigrade = (5.0 / 9) * (f_Degree - 32);//ע��˴�Ӧ����5.0
//	printf("���϶�98�����϶�Ϊ��%f\n", centigrade);//������
//	return 0;//��������ֵΪ0
//}
//��Ŀ
//��C���Լ�������Ϣ�������б���1000Ԫ�����һ�꣬�����ַ�����ѡ��
//���ڣ�������Ϊ0.0036��
//һ���ڶ��ڣ�������Ϊ0.0225��
//�����ΰ��궨�ڣ�������Ϊ0.0198��
//��ֱ�����һ���3�ַ������õ��ı�Ϣ��
#include <stdio.h>
int main()
{
	/*�豾��ΪThe_principal*/
	float The_principal = 1000;
	//����������Annual_interest_rate(1/2/3)
	float annual_interest_rate1 = 0.0036f;
	float annual_interest_rate2 = 0.0225f;
	float annual_interest_rate3 = 0.0198f;
	//��Ϣ�� principal
	float principal_1 = 0;
	float principal_2 = 0;
	float principal_3 = 0;
	//���㱾Ϣ��
	principal_1 = The_principal * (1 + annual_interest_rate1);
	principal_2 = The_principal * (1 + annual_interest_rate2);
	principal_3 = The_principal * (1 + annual_interest_rate3 / 2) * (1 + annual_interest_rate3 / 2);
	printf("��һ�ֱ�Ϣ����%f\n", principal_1);
	printf("�ڶ��ֱ�Ϣ����%f\n", principal_2);
	printf("�����ֱ�Ϣ����%f\n", principal_3);
	return 0;
}

//#include<stdio.h>//ͷ�ļ�
//int main() //������
//{
//	float interest_Rate1, interest_Rate2, interest_Rate3;//���帡�������ʱ���
//	interest_Rate1 = 0.0036f; //��ʼ����һ�ַ�ʽ������
//	interest_Rate2 = 0.0225f; //��ʼ���ڶ��ַ�ʽ������
//	interest_Rate3 = 0.0198f; //��ʼ�������ַ�ʽ������
//
//	float principal_0, principal_1, principal_2, principal_3;//�������
//	principal_0 = 1000;//��ʼ������
//
//	principal_1 = principal_0 * (1 + interest_Rate1);//��һ�ֱ�Ϣ��
//	principal_2 = principal_0 * (1 + interest_Rate2);//�ڶ��ֱ�Ϣ��
//	principal_3 = principal_0 * (1 + interest_Rate3 / 2) * (1 + interest_Rate3 / 2);//�����ֱ�Ϣ��
//
//	printf("��һ�ֱ�Ϣ�ͣ�%f\n", principal_1);//�����һ�ֱ�Ϣ��
//	printf("�ڶ��ֱ�Ϣ�ͣ�%f\n", principal_2);//����ڶ���Ϣ��
//	printf("�����ֱ�Ϣ�ͣ�%f\n", principal_3);//��������ֱ�Ϣ��
//
//	return 0; //��������ֵΪ0
//}