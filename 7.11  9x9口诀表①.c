/*9x9�ھ����
���9*9�ھ���
����������������п��ǣ���9��9�У�i�����У�j�����С�*/
#include<stdio.h>
int main()
{
	int i, j;//i���У�j����
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%d\t",i,j,i*j);
		printf("\n");
	}




}