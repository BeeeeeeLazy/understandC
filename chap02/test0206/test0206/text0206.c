/*
��ȡ��ߣ���ʾ��׼����
��׼���صļ��㹫ʽ�����-100��* 0.9
*/
#include<stdio.h>
int main(void)
{
	int height;
	double weight;

	printf("�����������ߣ�\n");
	scanf_s("%d", &height);
	weight = (height - 100) * 0.9;
	printf("��ı�׼�����ǣ�%.1fKG", weight);

	return 0;
}