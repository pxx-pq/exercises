/*三位数①
有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去掉不满足条件的排列。*/
#include<stdio.h>
int main()
{
	int i,j,k,t=0;
	for (i = 1; i <= 4; i++)					
	{
		for (j = 1; j <= 4; j++)	
		{
			for (k = 1; k <=4; k++)
			{
				if (i != j && k != j && i != k)
				{
					t++;
					printf("%d%d%d\t", i, j, k);
				}
			}
		}
		printf("\n");
	}
	printf("sum=%d", t);
	return 0;
}