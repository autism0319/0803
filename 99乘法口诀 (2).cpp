#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			k=i*j;
			printf("%d * %d = %d ",i,j,k);
		}
		printf("\n");
	}
	printf("断点停在这里")；
	return 0； 
}
