/*输入两个整数
整数a：54
整数b：84
a是b的64.285714%
*/
#include<stdio.h>
int main(void)
{
	int numberA;
	int numberB;
	
	printf("请输入两个整数。\n");
	printf("整数a：");
	scanf_s("%d", &numberA);

	printf("整数b：");
	scanf_s("%d", &numberB);

	printf("a是b的%f%%", (double)100*numberA / numberB);

	return 0;
}