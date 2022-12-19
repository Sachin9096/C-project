#include<stdio.h>
main()
{
	int a[5],found=0,key,i;
	printf("\n enter array element:");
	for(i=0;i<=4;i++)
	{
		scanf("\n%d",&a[i]);
	}
		printf("\n enter key=");
		scanf("%d",&key);
		for(i=0;i<4;i++)
		{
			if(a[i]==key)
			{
				found=1;
				break;
			}
		}
		if (found==1)
		{
			printf("\n element is found");
		}
		else
		{
			printf("\n element is not found");
		
		}
	}
	
