/*������������
����a��54
����b��84
a��b��64.285714%
*/
#include<stdio.h>
int main(void)
{
	int numberA;
	int numberB;
	
	printf("����������������\n");
	printf("����a��");
	scanf_s("%d", &numberA);

	printf("����b��");
	scanf_s("%d", &numberB);

	printf("a��b��%f%%", (double)100*numberA / numberB);

	return 0;
}