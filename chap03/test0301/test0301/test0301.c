/*
Լ���ж�

��������������
����A��17
����B��5
B����A��Լ��
*/
#include<stdio.h>
int main(void)
{
	int bigNumber;
	int smallNumber;

	printf("�������������нϴ���Ǹ�����");
	scanf_s("%d", &bigNumber);

	printf("�������������н�С���Ǹ�����");
	scanf_s("%d", &smallNumber);

	if (bigNumber % smallNumber != 0) {
		printf("%d����%d��Լ����\n", smallNumber, bigNumber);
	}
	else printf("%d��%d��Լ����\n", smallNumber, bigNumber);

	return 0;
}
/*
δ��չ��
��һ���ж�A��B��С�ĺ�����
�Ϳ��Բ�����ָʾ�ˡ�
*/