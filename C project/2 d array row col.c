#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("\n enter a matrix");
	for(i=0;i<=2;i++)//row
	{
		for(j=0;j<2;j++)//col
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("\n display matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\t a[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
		printf("\n");
	}
}
