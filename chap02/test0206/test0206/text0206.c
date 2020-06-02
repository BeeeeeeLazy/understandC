/*
读取身高，显示标准体重
标准体重的计算公式（身高-100）* 0.9
*/
#include<stdio.h>
int main(void)
{
	int height;
	double weight;

	printf("请输入你的身高：\n");
	scanf_s("%d", &height);
	weight = (height - 100) * 0.9;
	printf("你的标准体重是：%.1fKG", weight);

	return 0;
}