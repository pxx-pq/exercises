/*9x9口诀表①
输出9*9口诀。
程序分析：分行与列考虑，共9行9列，i控制行，j控制列。*/
#include<stdio.h>
int main()
{
	int i, j;//i是行，j是列
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%d\t",i,j,i*j);
		printf("\n");
	}




}