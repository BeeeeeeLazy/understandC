/*
约数判断

请输入两个整数
整数A：17
整数B：5
B不是A的约数
*/
#include<stdio.h>
int main(void)
{
	int bigNumber;
	int smallNumber;

	printf("请输入两个数中较大的那个数：");
	scanf_s("%d", &bigNumber);

	printf("请输入两个数中较小的那个数：");
	scanf_s("%d", &smallNumber);

	if (bigNumber % smallNumber != 0) {
		printf("%d不是%d的约数。\n", smallNumber, bigNumber);
	}
	else printf("%d是%d的约数。\n", smallNumber, bigNumber);

	return 0;
}
/*
未来展望
加一个判断A和B大小的函数。
就可以不用做指示了。
*/