#include<stdio.h>
main()
{
	char s1[50];
	int alfhabet,schar,digit,space,i;
	alphabet=schar=digit=space=0;
	printf("\n enter a string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='!'|| s1[i]=='@'|| s1[i]=='$'|| s1[i]=='%'|| s1[i]=='^'|| s1[i]=='&'|| s1[i]=='*')
		{
			schar++;
		}
		else if(s1[i]>='a'&& s1[i]<='z')
		{
			alfhabet++;
		}
		else if(s1[i]>='0'&& s1[i]<='9')
		{
			digit++;
		}
		else if(s1[i]=='   ')
		{
			space++;
		}
	}
	printf("special character :%d",schar);
	printf("\n alphabet :%d",alphabet);
	printf("\n digit :%d",digit);
	printf("\n space :%d",space);
}
