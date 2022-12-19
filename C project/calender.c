#include<stdio.h>
int main()
{
  int day,month,year;
  printf("Enter date in day/month/year format=");
  scanf("%d%d%d",&day,&month,&year);

  if(year>=1900 && year<=2022)
  {
    if(month>=1 && month<=12)
    {
      if(day>=1 && day<=31)
      {
        printf("\n date is valid");
      }
      else
      {
        printf("\n day is not valid");
      }
    }
    else
    {
      printf("\n month is not valid");
    }
  }
  else
  {
    printf("\n year is not valid");
  }
}